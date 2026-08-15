#include <iostream>
#include <string>
#include <random>

// #include "State.h"
// #include "Traveller.h"
// #include "BicycleMovement.h"
// #include "CarMovement.h"
// #include "FootMovement.h"
// #include "TrainMovement.h"

// #include "Route.h"
// #include "RouteStrategy.h"
// #include "ScenicRoute.h"
// #include "ShortestRoute.h"
// #include "BestRoute.h"
// #include "CheaperRoute.h"
// #include "FastestRoute.h"

#include "all.h"

int main(void) {
    // ================== states pattern =======================================================================
    // std::random_device rd;
    // std::mt19937 gen(rd());
    // std::uniform_int_distribution<int> dist(1, 100);

    // int number = dist(gen);

    // Traveller* traveller = new Traveller();
    // State* state = new AirMovement();
    // traveller->setState(state);

    // while (true){
    //     traveller->incrementDistance();
    //     if (number == traveller->getDistance()) {
    //         traveller->change("BicycleMovement"); 
    //         traveller->setDistance(0);
    //         break;             
    //     }
    // }

    // while (true){
    //     traveller->incrementDistance();
    //     if (traveller->getState()->timeIncrement(traveller->getDistance()) > 20) {
    //         traveller->change("CarMovement"); 
    //         traveller->setDistance(0);
    //         break;             
    //     }
    // }

    // while (true){
    //     traveller->incrementDistance();
    //     if (traveller->getState()->timeIncrement(traveller->getDistance()) > 50) {
    //         traveller->change("FootMovement"); 
    //         traveller->setDistance(0);
    //         break;             
    //     }
    // }

    // while (true){
    //     traveller->incrementDistance();
    //     if (traveller->getState()->timeIncrement(traveller->getDistance()) > 10) {
    //         traveller->change("TrainMovement"); 
    //         traveller->setDistance(0);
    //         break;             
    //     }
    // } 
    // delete traveller;

    // ======================== strategy pattern ============================================================================
    // Route* route = new Route();
    // route->setStrategy(new BestRoute()); // Strategy change
    // route->getRoute()->useRoute();
    // std::cout << "\n";

    // route->setStrategy(new CheaperRoute()); // Strategy change
    // route->getRoute()->useRoute();
    // std::cout << "\n";

    // route->setStrategy(new FastestRoute()); // Strategy change
    // route->getRoute()->useRoute();
    // std::cout << "\n";

    // route->setStrategy(new ScenicRoute()); // Strategy change
    // route->getRoute()->useRoute();
    // std::cout << "\n";

    // route->setStrategy(new ShortestRoute()); // Strategy change
    // route->getRoute()->useRoute();
    // std::cout << "\n";

    // delete route;


    // Abstract factory
    // WorldBuilder* factory1 = new CityFactory();
    // WorldBuilder* factory2 = new ForestFactory();
    // WorldBuilder* factory3 = new DesertFactory();
    // WorldBuilder* factory4 = new OceanFactory();

    // delete factory1;
    // delete factory2;
    // delete factory3;
    // delete factory4;

    // ============================== Composite ====================================================================================

    return 0;
}