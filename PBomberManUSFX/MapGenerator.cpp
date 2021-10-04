#include "MapGenerator.h"

MapGenerator::MapGenerator()
{
	anchoPantalla = 0;
	altoPantalla = 0;
}

MapGenerator::MapGenerator(SDL_Renderer* _renderer, int _anchoPantalla, int _altoPantalla):
	anchoPantalla(_anchoPantalla),
	altoPantalla(_altoPantalla),
	renderer(_renderer)
{
	
}

bool MapGenerator::crearObjetosJuego(string _path)
{
	// Crea un flujo de archivo
	fstream file;

	// Abrir el archivo
	file.open(_path.c_str(), ios::in);

	if (file.is_open() == false)
		return false;

	string line;
	int x = 0;
	int y = 0;

	Texture* texturaBomber;
	Texture* texturaMuroMetal;
	Texture* texturaMuroCeramica;
	Texture* texturaSueloCesped;

	texturaBomber = new Texture();
	texturaMuroCeramica = new Texture();
	texturaMuroMetal = new Texture();
	texturaSueloCesped = new Texture();
	
	Texture::renderer = renderer;

	texturaBomber->loadFromImage("resources/bomber.bmp");
	texturaMuroCeramica->loadFromImage("resources/muro_ceramica.jpg");
	texturaMuroMetal->loadFromImage("resources/muro_metal.jpg");
	texturaSueloCesped->loadFromImage("resources/textures.bmp");


	while (getline(file, line)) {
		vector<char> chars(line.begin(), line.end());
		for (int x = 0; x < chars.size(); x++) {
			GameObject* objetoNuevo = nullptr;

			switch (chars[x]) {
			case '0':
				objetoNuevo = new SueloCesped(texturaSueloCesped);
				((GameActor*)objetoNuevo)->setPosicionX(x * 30);
				((GameActor*)objetoNuevo)->setPosicionY(y * 30);
			case '1':
				objetoNuevo = new MuroCeramica(texturaMuroMetal);
			case '2':
				objetoNuevo = new MuroMetal(texturaMuroCeramica);
			case 'B':
				objetoNuevo = new Bomber(texturaBomber);
			}

			if (objetoNuevo != nullptr) {
				vectorObjectosJuego.push_back(objetoNuevo);
			}


		}
		y++;
	}

	return false;
}

void MapGenerator::transferirObjetosJuego(vector<GameObject*>& _vectorObjetosJuegoDestino)
{
}
