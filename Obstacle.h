#pragma once

#include <iostream>

class Obstacle
{
private:
public:
    Obstacle();
    virtual ~Obstacle();
    virtual void observe() = 0;
};
