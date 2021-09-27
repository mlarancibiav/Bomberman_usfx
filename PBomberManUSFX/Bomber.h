#pragma once
#include <iostream>
#include "GameActor.h"

using namespace std;

class Bomber : GameActor
{
private:

public:
	//Constructor
	Bomber(std::string path, SDL_Renderer* renderer);
};

