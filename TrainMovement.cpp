#include <iostream>

#include "TrainMovement.h"

TrainMovement::TrainMovement()
{
    type = "Train";
}

TrainMovement::~TrainMovement() {}

void TrainMovement::move(Traveller* con, string newMovement) {
    if (con == nullptr) return;

    if (newMovement == "CarMovement") {
        con->setState(new CarMovement());
    } else if (newMovement == "AirMovement") {
        con->setState(new AirMovement());
    } else if (newMovement == "TrainMovement") {
        con->setState(new TrainMovement());
    } else if (newMovement == "FootMovement") {
        std::cout << "Cannot disembark directly onto Foot from a moving Train. Try Car first.\n";
    } else if (newMovement == "BicycleMovement") {
        std::cout << "Cannot disembark directly onto Bicycle from a moving Train. Try Car first.\n";
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
