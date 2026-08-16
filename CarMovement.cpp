#include <iostream>

#include "CarMovement.h"

CarMovement::CarMovement()
{
    type = "Car";
}

CarMovement::~CarMovement() {}

void CarMovement::move(Traveller* con, string newMovement) {
    if (con == nullptr) return;

    if (newMovement == "BicycleMovement") {
        con->setState(new BicycleMovement());
    } else if (newMovement == "TrainMovement") {
        con->setState(new TrainMovement());
    } else if (newMovement == "CarMovement") {
        con->setState(new CarMovement());
    } else if (newMovement == "FootMovement") {
        std::cout << "Cannot leave the Car directly on Foot while travelling. Try Bicycle first.\n";
    } else if (newMovement == "AirMovement") {
        std::cout << "Cannot drive directly into the Air. Try Train first.\n";
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
