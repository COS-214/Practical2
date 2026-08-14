#pragma once

#include <iostream>

#include "RouteStrategy.h"

class BestRoute : public RouteStrategy
{
private:
public:
    BestRoute();
    ~BestRoute();
    void useRoute() override;
};
