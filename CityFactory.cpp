#include <iostream>

#include "CityFactory.h"


CityFactory::CityFactory() {}

CityFactory::~CityFactory() {}

NPC *CityFactory::createNPC()
{
    return new CityNPC();
}

Obstacle *CityFactory::createObstacle()
{
    return new CityObstacle();
}

Terrain *CityFactory::createTerrain()
{
    return new CityTerrain();
}

Structure *CityFactory::createStructure()
{
    return new CityStructure();
}
