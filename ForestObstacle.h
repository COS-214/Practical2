#pragma once

#include "Obstacle.h"

class ForestObstacle : public Obstacle
{
private:
public:
    ForestObstacle();
    ~ForestObstacle();
    void observe() override;
};

