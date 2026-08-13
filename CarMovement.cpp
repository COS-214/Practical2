#include <iostream>

#include "CarMovement.h"


CarMovement::CarMovement(/* args */)
{
    type = "Car";
}

CarMovement::~CarMovement() {}

void CarMovement::move(Traveller* con, string newMovement) {

}

string CarMovement::getType()
{
    return type;
}

float CarMovement::timeIncrement()
{
    return 1.3; // 1.3 minutes per kilometer
}
