#include <iostream>

#include "ForestFactory.h"


ForestFactory::ForestFactory() {}

ForestFactory::~ForestFactory() {}

NPC *ForestFactory::createNPC()
{
    return new ForestNPC();
}

Obstacle *ForestFactory::createObstacle()
{
    return new ForestObstacle();
}

Terrain *ForestFactory::createTerrain()
{
    return new ForestTerrain();
}

Structure *ForestFactory::createStructure()
{
    return new ForestStructure();
}
