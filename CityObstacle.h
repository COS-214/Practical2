#pragma once

#include "Obstacle.h"

class CityObstacle : public Obstacle
{
private:
public:
    CityObstacle();
    ~CityObstacle();
    void observe() override;
};

