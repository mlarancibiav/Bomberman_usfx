#include "Bomber.h"

Bomber::Bomber(std::string path, SDL_Renderer* renderer):GameActor(renderer)
{
	if(path.length() > 0)
		textura->loadFromImage(path);
}
