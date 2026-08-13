#include <iostream>

#include "CarMovement.h"


CarMovement::CarMovement()
{
    type = "Car";
}

CarMovement::~CarMovement() {}

void CarMovement::move(Traveller* con, string newMovement) {
    if (newMovement.compare("AirMovement")) {
        con->setState(new AirMovement());
    } else if (newMovement.compare("BicycleMovement")) {
        con->setState(new BicycleMovement());
    } else if (newMovement.compare("FootMovement")) {
        con->setState(new FootMovement());
    } else if (newMovement.compare("CarMovement")) {
        con->setState(new CarMovement());
    } else if (newMovement.compare("TrainMovement")) {
        con->setState(new TrainMovement());
    } 
}

string CarMovement::getType()
{
    return type;
}

float CarMovement::timeIncrement(float distance)
{
    return distance * 1.3; // 1.3 minutes per kilometer
}
