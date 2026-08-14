#pragma once

#include <iostream>

#include "RouteStrategy.h"

class RouteStrategy;

class Route {
public:
        Route();
        virtual ~Route();
        RouteStrategy* getRoute();
        void setStrategy(RouteStrategy*);

private:
    RouteStrategy* routeStrategy;
};
