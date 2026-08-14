#pragma once

#include <iostream>

#include "RouteStrategy.h"

class ShortestRoute : public RouteStrategy
{
private:
public:
    ShortestRoute();
    ~ShortestRoute();
    void useRoute() override;
};

