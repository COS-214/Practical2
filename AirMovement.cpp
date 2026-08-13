#include <iostream>

#include "Traveller.h"
#include "AirMovement.h"

AirMovement::AirMovement()
{
    type = "Air";
}

AirMovement::~AirMovement() {}

void AirMovement::move(Traveller* con, string newMovement) {
    if (newMovement.compare("AirMovement")) {
        con->setState(new AirMovement());
    }
}

string AirMovement::getType()
{
    return type;
}

float AirMovement::timeIncrement()
{
    return 0.42; // 0.42 minutes per kilometer
}
