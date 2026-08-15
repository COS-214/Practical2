#pragma once
#include <iostream>

#include "WorldBuilder.h"
#include "ForestNPC.h"
#include "ForestStructure.h"
#include "ForestObstacle.h"
#include "ForestTerrain.h"


class ForestFactory : public WorldBuilder
{
public:
    ForestFactory();
    ~ForestFactory();
    NPC* createNPC() override;
    Obstacle* createObstacle() override;
    Terrain* createTerrain() override;
    Structure* createStructure() override;
};

