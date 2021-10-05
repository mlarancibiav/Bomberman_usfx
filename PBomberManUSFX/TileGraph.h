#pragma once
#include <iostream>
#include <vector>
#include "Tile.h"
using namespace std;

class TileGraph
{
private:

	vector<Tile*> tilesGraph;
	int getIndice(int _x, int _y);
public:
	static int anchoPantalla;
	static int altoPantalla;
	static int anchoTilesGraph;
	static int altoTilesGraph;

	// Contructores y destructor
	TilesGraph();
	TIlesGraph(int _anchoTilesGraph, int _altoTilesGraph, int _anchoPantalla, int _altoPantalla);
	~TileGraph();

	// Funciones especificas
	void getTileEn(int _x, int _y);

	array<Tile*, 4> get4Vecinos(Tile* _tile);
	array<Tile*, 8> get8Vecinos(Tile* _tile);

	Bomberman* getBomberman();
};

