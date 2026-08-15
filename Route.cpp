#include <iostream>

#include "Route.h"
#include "RouteStrategy.h"

Route::Route() {
    routeStrategy = nullptr;
}

Route::~Route()
{
    delete routeStrategy;
    routeStrategy = nullptr;
}

RouteStrategy *Route::getRoute()
{
    return routeStrategy;
}

void Route::setStrategy(RouteStrategy *routeStrategy)
{
    if (this->routeStrategy != nullptr) {
        delete this->routeStrategy;        
    }
    this->routeStrategy = routeStrategy;
}
