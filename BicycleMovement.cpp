#include <iostream>

#include "State.h"
#include "BicycleMovement.h"

BicycleMovement::BicycleMovement()
{
    type = "Bicycle";
}

BicycleMovement::~BicycleMovement()
{    
}

void BicycleMovement::move(Traveller* con, string newMovement) {
    if (con == nullptr) return;

    if (newMovement == "FootMovement") {
        con->setState(new FootMovement());
    } else if (newMovement == "CarMovement") {
        con->setState(new CarMovement());
    } else if (newMovement == "BicycleMovement") {
        con->setState(new BicycleMovement());
    } else if (newMovement == "AirMovement") {
        std::cout << "Cannot cycle directly into the Air. Try Car and Train first.\n";
    } else if (newMovement == "TrainMovement") {
        std::cout << "Cannot cycle directly onto a Train. Try Car first.\n";
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

