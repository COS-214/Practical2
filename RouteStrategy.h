#pragma once

#include <iostream>

class RouteStrategy
{
private:
public:
    RouteStrategy();
    virtual ~RouteStrategy();
    virtual void useRoute() = 0;
};

