#include <iostream>

#include "state.h"
#include "BicycleMovement.h"

BicycleMovement::BicycleMovement()
{
    type = "Bicycle";
}

BicycleMovement::~BicycleMovement()
{    
}

void BicycleMovement::BicycleMovement::move(Traveller* con, string newMovement) {
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

string BicycleMovement::getType()
{
    return type;
}


float BicycleMovement::timeIncrement(float distance)
{
    return distance * 4; // 4 minutes per kilometer
}

