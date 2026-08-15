#include <iostream>
#include <string>

#include "State.h"
#include "Traveller.h"
#include "AirMovement.h"
#include "BicycleMovement.h"
#include "CarMovement.h"
#include "FootMovement.h"
#include "TrainMovement.h"

#include "Route.h"
#include "BestRoute.h"
#include "CheaperRoute.h"
#include "FastestRoute.h"
#include "ScenicRoute.h"
#include "ShortestRoute.h"

#include "WorldBuilder.h"
#include "CityFactory.h"
#include "ForestFactory.h"
#include "DesertFactory.h"
#include "OceanFactory.h"
#include "NPC.h"

#include "Map.h"
#include "Location.h"
#include "Quest.h"
#include "Toll.h"
#include "Weather.h"

#include "Region.h"


int main()
{
    std::cout << "================ STATE PATTERN ================\n";
    int number = 60;

    Traveller* traveller = new Traveller();
    State* state = new AirMovement();
    traveller->setState(state);

    std::cout << "Current state: " << traveller->getState()->getType() << "\n";

    while (true){
        traveller->incrementDistance();
        if (number == traveller->getDistance()) {
            traveller->change("BicycleMovement"); 
            traveller->setDistance(0);
            break;             
        }
    }
    std::cout << "Current state: " << traveller->getState()->getType() << "\n";

    while (true){
        traveller->incrementDistance();
        if (traveller->getState()->timeIncrement(traveller->getDistance()) > 20) {
            traveller->change("CarMovement"); 
            traveller->setDistance(0);
            break;             
        }
    }
    std::cout << "Current state: " << traveller->getState()->getType() << "\n";

    while (true){
        traveller->incrementDistance();
        if (traveller->getState()->timeIncrement(traveller->getDistance()) > 50) {
            traveller->change("FootMovement"); 
            traveller->setDistance(0);
            break;             
        }
    }
    std::cout << "Current state: " << traveller->getState()->getType() << "\n";

    while (true){
        traveller->incrementDistance();
        if (traveller->getState()->timeIncrement(traveller->getDistance()) > 10) {
            traveller->change("TrainMovement"); 
            traveller->setDistance(0);
            break;             
        }
    } 
    std::cout << "Current state: " << traveller->getState()->getType() << "\n";
    delete traveller;

    std::cout << "\n================ STRATEGY PATTERN ================\n";

    Route* route = new Route();

    route->setStrategy(new BestRoute());
    route->getRoute()->useRoute();

    route->setStrategy(new CheaperRoute());
    route->getRoute()->useRoute();

    route->setStrategy(new FastestRoute());
    route->getRoute()->useRoute();

    route->setStrategy(new ScenicRoute());
    route->getRoute()->useRoute();

    route->setStrategy(new ShortestRoute());
    route->getRoute()->useRoute();

    delete route;


    std::cout << "\n================ ABSTRACT FACTORY ================\n";

    WorldBuilder* cityFactory = new CityFactory();
    WorldBuilder* forestFactory = new ForestFactory();
    WorldBuilder* desertFactory = new DesertFactory();
    WorldBuilder* oceanFactory = new OceanFactory();

    NPC* cityNPC = cityFactory->createNPC();
    NPC* forestNPC = forestFactory->createNPC();
    NPC* desertNPC = desertFactory->createNPC();
    NPC* oceanNPC = oceanFactory->createNPC();

    cityNPC->observe();
    forestNPC->observe();
    desertNPC->observe();
    oceanNPC->observe();

    delete cityNPC;
    delete forestNPC;
    delete desertNPC;
    delete oceanNPC;

    delete cityFactory;
    delete forestFactory;
    delete desertFactory;
    delete oceanFactory;


    std::cout << "\n================ DECORATOR PATTERN ================\n";

    // Base component
    Map* location1 = new Location();

    // Decorate it progressively
    Map* questLocation = new Quest(location1);
    Map* tollQuestLocation = new Toll(questLocation);
    Map* weatherTollQuestLocation = new Weather(tollQuestLocation);


    // Another valid combination
    Map* location2 = new Location();

    Map* tollLocation = new Toll(location2);
    Map* weatherTollLocation = new Weather(tollLocation);


    // Another valid combination
    Map* location3 = new Location();

    Map* questLocation3 = new Quest(location3);
    Map* tollQuestLocation3 = new Toll(questLocation3);


    std::cout << "\n================ COMPOSITE PATTERN ================\n";

    Region* region = new Region();
    region->add(weatherTollQuestLocation);
    region->add(weatherTollLocation);
    region->add(tollQuestLocation3);
    region->print();

    delete region;


    return 0;
}