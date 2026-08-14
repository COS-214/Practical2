#pragma once

#include <iostream>

#include "RouteStrategy.h"

class ScenicRoute : public RouteStrategy
{
private:
public:
    ScenicRoute();
    ~ScenicRoute();
    void useRoute() override;
};
