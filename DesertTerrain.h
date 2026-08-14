#pragma once

#include "Terrain.h"

class DesertTerrain : public Terrain
{
private:
public:
    DesertTerrain();
    ~DesertTerrain();
    void observe() override;
};

