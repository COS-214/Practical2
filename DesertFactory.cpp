#include <iostream>

#include "DesertFactory.h"


DesertFactory::DesertFactory() {}

DesertFactory::~DesertFactory() {}

NPC *DesertFactory::createNPC()
{
    return new DesertNPC();
}

Obstacle *DesertFactory::createObstacle()
{
    return new DesertObstacle();
}

Terrain *DesertFactory::createTerrain()
{
    return new DesertTerrain();
}

Structure *DesertFactory::createStructure()
{
    return new DesertStructure();
}
