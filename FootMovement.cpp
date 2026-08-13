#include <iostream>


#include "Traveller.h"
#include "FootMovement.h"

FootMovement::FootMovement(/* args */)
{
    type = "Foot";
}

FootMovement::~FootMovement() {}

void FootMovement::move(Traveller* con, string newMovement) {

}

string FootMovement::getType()
{
    return type;
}

float FootMovement::timeIncrement()
{
    return 12; // 12 minutes per kilometer
}
