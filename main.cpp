#include <iostream>
#include <string>

#include "State.h"
#include "Traveller.h"
#include "BicycleMovement.h"
#include "CarMovement.h"
#include "FootMovement.h"
#include "TrainMovement.h"

int main(void) {
    Traveller* traveller1 = new Traveller();
    State* state1 = new AirMovement();
    traveller1->setState(state1);
    cout << traveller1->getState()->getType();

    traveller1->incrementDistance();
    traveller1->incrementDistance();
    traveller1->incrementDistance();
    traveller1->incrementDistance();
    traveller1->incrementDistance();

    traveller1->change("BicycleMovement");
    cout << traveller1->getState()->getType();
    delete traveller1;
}
