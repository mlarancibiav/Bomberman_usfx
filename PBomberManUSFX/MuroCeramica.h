#pragma once
#include "GameActor.h"
class MuroCeramica :
    public GameActor
{
public:
    MuroCeramica(Texture* _textura, Tile* _tileActual);
    virtual void setTileActual(Tile* _tileNuevo) {};
};

