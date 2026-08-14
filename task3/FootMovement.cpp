#include <iostream>


#include "Traveller.h"
#include "FootMovement.h"

FootMovement::FootMovement()
{
    type = "Foot";
}

FootMovement::~FootMovement() {}

void FootMovement::move(Traveller* con, string newMovement) {
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

string FootMovement::getType()
{
    return type;
}

float FootMovement::timeIncrement(float distance)
{
    return distance * 12; // 12 minutes per kilometer
}
