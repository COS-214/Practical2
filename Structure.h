#pragma once

#include <iostream>

class Structure
{
private:
public:
    Structure();
    virtual ~Structure();
    virtual void observe() = 0;
};

