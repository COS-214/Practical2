#pragma once

#include "Obstacle.h"

class OceanObstacle : public Obstacle
{
private:
public:
    OceanObstacle();
    ~OceanObstacle();
    void observe() override;
};

