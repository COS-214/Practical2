#pragma once
#include <iostream>

class Map
{
public:
    Map();
    virtual ~Map();
    virtual void print() = 0;
};
