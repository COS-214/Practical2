#pragma once

#include "Terrain.h"

class OceanTerrain : public Terrain
{
private:
public:
    OceanTerrain();
    ~OceanTerrain();
    void observe() override;
};

