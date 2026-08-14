#pragma once

#include "Terrain.h"

class CityTerrain : public Terrain
{
private:
public:
    CityTerrain();
    ~CityTerrain();
    void observe() override;
};

