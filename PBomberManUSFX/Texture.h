#pragma once
#include <iostream>
#include <SDL.h>
#include <SDL_image.h>


class Texture
{
private:
	SDL_Texture* texture;
	int ancho;
	int alto;
	SDL_Renderer* renderer;

public:
	Texture();
	~Texture();

	void free();

	void setRenderer(SDL_Renderer* _renderer) { renderer = _renderer; }
	SDL_Renderer* getRenderer() { return renderer; }

	bool loadFromImage(std::string path, Uint8 r = 0, Uint8 g = 0, Uint8 b = 0);
	void render(int x, int y, SDL_Rect* clip = nullptr, SDL_Rect* rect = nullptr, double angle = 0.0, SDL_Point* center = nullptr, SDL_RendererFlip renderFlip = SDL_FLIP_NONE);
};

