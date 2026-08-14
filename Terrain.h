#pragma once

#include <iostream>

class Terrain
{
private:
public:
    Terrain();
    virtual ~Terrain();
    virtual void observe() = 0;
};
