#pragma once

#include "State.h"
#include "Traveller.h"

#include "BicycleMovement.h"
#include "AirMovement.h"
#include "FootMovement.h"
#include "TrainMovement.h"


class CarMovement : public State {
public:
    CarMovement(/* add */);
    ~CarMovement();
    void move(Traveller*, string) override;
    string getType() override;
    float timeIncrement() override;
private:
    string type;
};