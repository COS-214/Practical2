#pragma once

#include <iostream>

#include "RouteStrategy.h"

class CheaperRoute : public RouteStrategy
{
private:
    /* data */
public:
    CheaperRoute(/* args */);
    ~CheaperRoute();
    void useRoute() override;
};

