#include <iostream>

#include "Traveller.h"
#include "FootMovement.h"

FootMovement::FootMovement()
{
    type = "Foot";
}

FootMovement::~FootMovement() {}

void FootMovement::move(Traveller* con, string newMovement) {
    if (con == nullptr) return;

    if (newMovement == "BicycleMovement") {
        con->setState(new BicycleMovement());
    } else if (newMovement == "AirMovement") {
        con->setState(new AirMovement()); // guard: allowed exception — call in a helicopter
    } else if (newMovement == "FootMovement") {
        con->setState(new FootMovement());
    } else if (newMovement == "CarMovement") {
        std::cout << "Cannot walk directly into a Car. Try Bicycle first.\n";
    } else if (newMovement == "TrainMovement") {
        std::cout << "Cannot walk directly onto a Train. Try Bicycle or Car first.\n";
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
