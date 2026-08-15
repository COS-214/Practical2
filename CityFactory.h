#include <iostream>

#include "WorldBuilder.h"
#include "CityNPC.h"
#include "CityStructure.h"
#include "CityObstacle.h"
#include "CityTerrain.h"


class CityFactory : public WorldBuilder
{
public:
    CityFactory();
    ~CityFactory();
    NPC* createNPC() override;
    Obstacle* createObstacle() override;
    Terrain* createTerrain() override;
    Structure* createStructure() override;
};

