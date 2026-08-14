#include <iostream>
#include <string>
#include <random>

#include "State.h"
#include "Traveller.h"
#include "BicycleMovement.h"
#include "CarMovement.h"
#include "FootMovement.h"
#include "TrainMovement.h"

int main(void) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(1, 100);

    int number = dist(gen);

    Traveller* traveller1 = new Traveller();
    State* state1 = new AirMovement();
    traveller1->setState(state1);

    while (true){
        traveller1->incrementDistance();

        if (number == traveller1->getDistance() || traveller1->getState()->timeIncrement(traveller1->getDistance()) > 20) {
            traveller1->change("BicycleMovement"); 
            traveller1->setState(0);
            break;             
        }
    }
    delete traveller1;
}
