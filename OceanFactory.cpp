#include <iostream>

#include "OceanFactory.h"


OceanFactory::OceanFactory() {}

OceanFactory::~OceanFactory() {}

NPC *OceanFactory::createNPC()
{
    return new OceanNPC();
}

Obstacle *OceanFactory::createObstacle()
{
    return new OceanObstacle();
}

Terrain *OceanFactory::createTerrain()
{
    return new OceanTerrain();
}

Structure *OceanFactory::createStructure()
{
    return new OceanStructure();
}
