#include <iostream>

#include "TrainMovement.h"

TrainMovement::TrainMovement()
{
    type = "Train";
}

TrainMovement::~TrainMovement() {}

void TrainMovement::move(Traveller* con, string newMovement) {
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

string TrainMovement::getType()
{
    return type;
}

float TrainMovement::timeIncrement(float distance)
{
    return distance * 2.4; // 2.4 minutes per kilometer
}
