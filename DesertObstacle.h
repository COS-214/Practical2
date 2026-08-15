#pragma once

#include "Obstacle.h"

class DesertObstacle : public Obstacle
{
private:
public:
    DesertObstacle();
    ~DesertObstacle();
    void observe() override;
};

