#include <iostream>

#include "TrainMovement.h"

TrainMovement::TrainMovement(/* args */)
{
    type = "Train";
}

TrainMovement::~TrainMovement() {}

void TrainMovement::move(Traveller* con, string newMovement) {

}

string TrainMovement::getType()
{
    return type;
}

float TrainMovement::timeIncrement()
{
    return 2.4; // 2.4 minutes per kilometer
}
