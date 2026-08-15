#include <iostream>

#include "WorldBuilder.h"
#include "OceanNPC.h"
#include "OceanStructure.h"
#include "OceanObstacle.h"
#include "OceanTerrain.h"


class OceanFactory : public WorldBuilder
{
public:
    OceanFactory();
    ~OceanFactory();
    NPC* createNPC() override;
    Obstacle* createObstacle() override;
    Terrain* createTerrain() override;
    Structure* createStructure() override;
};

