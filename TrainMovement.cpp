#include <iostream>

#include "TrainMovement.h"

TrainMovement::TrainMovement()
{
    type = "Train";
}

TrainMovement::~TrainMovement() {}

void TrainMovement::move(Traveller* con, string newMovement) {
    if (newMovement == ("AirMovement")) {
        con->setState(new AirMovement());
    } else if (newMovement == ("BicycleMovement")) {
        con->setState(new BicycleMovement());
    } else if (newMovement == ("FootMovement")) {
        con->setState(new FootMovement());
    } else if (newMovement == ("CarMovement")) {
        con->setState(new CarMovement());
    } else if (newMovement == ("TrainMovement")) {
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
