#pragma once

#include "Terrain.h"

class ForestTerrain : public Terrain
{
private:
public:
    ForestTerrain();
    ~ForestTerrain();
    void observe() override;
};

