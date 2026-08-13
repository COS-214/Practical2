#include <iostream>

#include "Traveller.h"
#include "AirMovement.h"

AirMovement::AirMovement()
{
    type = "Air";
}

AirMovement::~AirMovement() {}

void AirMovement::move(Traveller* con, string newMovement) {
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

string AirMovement::getType()
{
    return type;
}

float AirMovement::timeIncrement(float distance)
{
    return distance * 0.42; // 0.42 minutes per kilometer
}
