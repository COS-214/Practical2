#pragma once
#include <iostream>


#include "NPC.h"
#include "Obstacle.h"
#include "Terrain.h"
#include "Structure.h"

class WorldBuilder
{

public:
    WorldBuilder();
    virtual ~WorldBuilder();
    virtual NPC* createNPC() = 0;
    virtual Obstacle* createObstacle() = 0;
    virtual Terrain* createTerrain() = 0;
    virtual Structure* createStructure() = 0;
};

