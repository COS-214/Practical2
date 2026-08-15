#pragma once
#include <iostream>

#include "WorldBuilder.h"
#include "DesertNPC.h"
#include "DesertStructure.h"
#include "DesertObstacle.h"
#include "DesertTerrain.h"


class DesertFactory : public WorldBuilder
{
public:
    DesertFactory();
    ~DesertFactory();
    NPC* createNPC() override;
    Obstacle* createObstacle() override;
    Terrain* createTerrain() override;
    Structure* createStructure() override;
};

