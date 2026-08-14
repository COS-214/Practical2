#pragma once

#include <iostream>

#include "RouteStrategy.h"

class FastestRoute : public RouteStrategy
{
private:
public:
    FastestRoute();
    ~FastestRoute();
    void useRoute() override;
};

