#pragma once
#include <iostream>
using namespace std;

class Bomber
{
private:
	int anchoAvatar;
	int altoAvatar;

public:
	int numeroVidas;

	//Constructor
	Bomber();
	Bomber(int _anchoAvatar, int _altoAvatar, int _numeroVidas);

	int getAnchoAvatar() { return anchoAvatar; }
	void setAnchoAvatar(int _anchoAvatar) { anchoAvatar = _anchoAvatar;}

	int getAltoAvatar() { return altoAvatar; }
	void setAltoAvatar(int _altoAvatar) { altoAvatar = _altoAvatar; }

	void colocarBomba();
	void moverse();
	void mostrarInformacion();
};

