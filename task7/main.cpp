#include <iostream>
#include <string>

#include "State.h"
#include "Traveller.h"
#include "BicycleMovement.h"
#include "CarMovement.h"
#include "FootMovement.h"
#include "TrainMovement.h"

#include "Route.h"
#include "RouteStrategy.h"
#include "ScenicRoute.h"
#include "ShortestRoute.h"
#include "BestRoute.h"
#include "CheaperRoute.h"
#include "FastestRoute.h"

// Factory =================================
#include "CityFactory.h"
#include "CityNPC.h"
#include "CityObstacle.h"
#include "CityStructure.h"
#include "CityTerrain.h"

#include "DesertFactory.h"
#include "DesertNPC.h"
#include "DesertObstacle.h"
#include "DesertStructure.h"
#include "DesertTerrain.h"

#include "ForestFactory.h"
#include "ForestNPC.h"
#include "ForestObstacle.h"
#include "ForestStructure.h"
#include "ForestTerrain.h"

#include "OceanFactory.h"
#include "OceanNPC.h"
#include "OceanObstacle.h"
#include "OceanStructure.h"
#include "OceanTerrain.h"

#include "NPC.h"
#include "Terrain.h"
#include "Obstacle.h"
#include "Structure.h"


// Composite and decorator
#include "Map.h"
#include "Location.h"
#include "Locations.h"
#include "LocationSpecifications.h"
#include "Region.h"
#include "Quest.h"
#include "Weather.h"
#include "Toll.h"

int main(void) {
    // ================== states pattern =======================================================================

    int number = 60;

    Traveller* traveller = new Traveller();
    State* state = new AirMovement();
    traveller->setState(state);

    while (true){
        traveller->incrementDistance();
        if (number == traveller->getDistance()) {
            traveller->change("BicycleMovement"); 
            traveller->setDistance(0);
            break;             
        }
    }

    while (true){
        traveller->incrementDistance();
        if (traveller->getState()->timeIncrement(traveller->getDistance()) > 20) {
            traveller->change("CarMovement"); 
            traveller->setDistance(0);
            break;             
        }
    }

    while (true){
        traveller->incrementDistance();
        if (traveller->getState()->timeIncrement(traveller->getDistance()) > 50) {
            traveller->change("FootMovement"); 
            traveller->setDistance(0);
            break;             
        }
    }

    while (true){
        traveller->incrementDistance();
        if (traveller->getState()->timeIncrement(traveller->getDistance()) > 10) {
            traveller->change("TrainMovement"); 
            traveller->setDistance(0);
            break;             
        }
    } 
    delete traveller;

    //======================== strategy pattern ============================================================================
    Route* route = new Route();
    route->setStrategy(new BestRoute()); // Strategy change
    route->getRoute()->useRoute();
    std::cout << "\n";

    route->setStrategy(new CheaperRoute()); // Strategy change
    route->getRoute()->useRoute();
    std::cout << "\n";

    route->setStrategy(new FastestRoute()); // Strategy change
    route->getRoute()->useRoute();
    std::cout << "\n";

    route->setStrategy(new ScenicRoute()); // Strategy change
    route->getRoute()->useRoute();
    std::cout << "\n";

    route->setStrategy(new ShortestRoute()); // Strategy change
    route->getRoute()->useRoute();
    std::cout << "\n";

    delete route;


    // ============================== Abstract factory ===============================================================
    WorldBuilder* factory1 = new CityFactory();
    WorldBuilder* factory2 = new ForestFactory();
    WorldBuilder* factory3 = new DesertFactory();
    WorldBuilder* factory4 = new OceanFactory();

    NPC* cityNPC = factory1->createNPC();
    NPC* forestNPC = factory2->createNPC();
    NPC* desertNPC = factory3->createNPC();
    NPC* oceanNPC = factory4->createNPC();

    cityNPC->observe();
    forestNPC->observe();
    desertNPC->observe();
    oceanNPC->observe();

    delete cityNPC;
    delete forestNPC;
    delete desertNPC;
    delete oceanNPC;

    delete factory1;
    delete factory2;
    delete factory3;
    delete factory4;


    // ============================== Decorator ====================================================================================
    Map* location1 = new Location();
    Map* QuestLocation = new Quest(location1);
    Map* TollQuestLocation = new Toll(QuestLocation);
    Map* WeatherTollQuestLocation = new Toll(TollQuestLocation);

    Map* location2 = new Location();
    Map* TollLocation2 = new Toll(location2);
    Map* WeatherTollLocation = new Toll(TollLocation2);


    Map* location3 = new Location();
    Map* QuestLocation3 = new Quest(location3);
    Map* TollQuestLocation3 = new Toll(QuestLocation3);


    // ============================== Composite ====================================================================================
    Region* locations = new Region();
    locations->add(WeatherTollQuestLocation);
    locations->add(WeatherTollLocation);
    locations->add(TollQuestLocation3);

    delete locations;

    return 0;
}