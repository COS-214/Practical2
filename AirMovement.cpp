#include <iostream>

#include "Traveller.h"
#include "AirMovement.h"

AirMovement::AirMovement()
{
    type = "Air";
}

AirMovement::~AirMovement() {}

void AirMovement::move(Traveller* con, string newMovement) {
    if (con == nullptr) return;

    if (newMovement == "TrainMovement") {
        con->setState(new TrainMovement());
    } else if (newMovement == "AirMovement") {
        con->setState(new AirMovement());
    } else if (newMovement == "FootMovement") {
        std::cout << "Cannot land directly into Foot movement from the air. Try landing via Train first.\n";
    } else {
        std::cout << "Cannot transition from Air movement directly to " << newMovement << ".\n";
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
