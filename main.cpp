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
#include "Obstacle.h"
#include "Terrain.h"
#include "Structure.h"

#include "Map.h"
#include "Location.h"
#include "Quest.h"
#include "Toll.h"
#include "Weather.h"

#include "Region.h"

int DISTANCE = 0;

int readChoice(int val)
{
    DISTANCE += 5; // DISTANCE increment
    int choice;
    do {
        std::cin >> choice; 
    } while (choice < 1 || choice > val);

    return choice;
}

void printTravellerStatus(Traveller* traveller)
{
    std::cout << "Current travel mode: " << traveller->getState()->getType()
               << " | Distance since last check: " << traveller->getDistance()
               << " | Total time travelled: " << traveller->getTotalTimeTravelled() << " minutes\n";
}

void handleMove(Traveller* traveller)
{
    traveller->setDistance(DISTANCE); // Setting the accumulated distance of the traveller
    std::cout << "\nChoose a travel mode to attempt:\n"
               << "1. Foot\n2. Bicycle\n3. Car\n4. Train\n5. Air\n";
    int choice = readChoice(5);
    std::string target;
    switch (choice)
    {
        case 1: target = "FootMovement";  break;
        case 2: target = "BicycleMovement"; break;
        case 3: target = "CarMovement"; break;
        case 4: target = "TrainMovement"; break;
        case 5: target = "AirMovement"; break;
        default:
            std::cout << "Invalid choice.\n";
            return;
    }
    traveller->change(target); // the current State decides whether this is allowed
    printTravellerStatus(traveller);
    traveller->setDistance(0); // Resetting the distance to 0
}

void handleRoute(Route* route)
{
    DISTANCE += 5; // DISTANCE increment
    std::cout << "\nChoose a route strategy:\n"
               << "1. Best\n2. Cheaper\n3. Fastest\n4. Scenic\n5. Shortest\n";
    int choice = readChoice(5);
    switch (choice)
    {
        case 1: route->setStrategy(new BestRoute()); break;
        case 2: route->setStrategy(new CheaperRoute()); break;
        case 3: route->setStrategy(new FastestRoute()); break;
        case 4: route->setStrategy(new ScenicRoute()); break;
        case 5: route->setStrategy(new ShortestRoute()); break;
        default:
            std::cout << "Invalid choice.\n";
            return;
    }
    route->getRoute()->useRoute();
}

void handleDecorate(Region* region)
{
    DISTANCE += 5; // DISTANCE increment
    int count = region->size();
    if (count == 0)
    {
        std::cout << "\nThe map has no locations to decorate.\n";
        return;
    }

    std::cout << "\nChoose a location by index (0 to " << count - 1 << "):\n";
    int index = readChoice(count - 1);
    if (index < 0 || index >= count)
    {
        std::cout << "Invalid index.\n";
        return;
    }

    std::cout << "Choose a feature to add:\n1. Weather\n2. Toll\n3. Quest\n";
    int choice = readChoice(3);

    Map* current = region->getMap(index);
    Map* wrapped = nullptr;
    switch (choice)
    {
        case 1: wrapped = new Weather(current); break;
        case 2: wrapped = new Toll(current); break;
        case 3: wrapped = new Quest(current); break;
        default:
            std::cout << "Invalid choice.\n";
            return;
    }

    // The Region takes ownership of the new wrapper; the wrapper now owns
    // the old pointer, so nothing here needs to be deleted separately.
    region->setMap(index, wrapped);
    std::cout << "Location " << index << " decorated. New chain:\n";
    wrapped->print();
}

void handleBiome()
{
    DISTANCE + 5; // DISTANCE increment
    std::cout << "\nChoose a biome to enter:\n"
               << "1. City\n2. Forest\n3. Desert\n4. Ocean\n";
    int choice = readChoice(4);
    WorldBuilder* factory = nullptr;
    std::string name;
    switch (choice)
    {
        case 1: factory = new CityFactory(); name = "City"; break;
        case 2: factory = new ForestFactory(); name = "Forest"; break;
        case 3: factory = new DesertFactory(); name = "Desert"; break;
        case 4: factory = new OceanFactory(); name = "Ocean"; break;
        default:
            std::cout << "Invalid choice.\n";
            return;
    }

    Terrain* terrain = factory->createTerrain();
    NPC* npc = factory->createNPC();
    Obstacle* obstacle = factory->createObstacle();
    Structure* structure = factory->createStructure();

    std::cout << "You step into the biome...\n";
    std::cout << "== ======= Welcome to the: "  << name << " Biome ============\n";
    bool running = true;
    while (running) {
        std::cout << "== 1. Observe the terrain\n"
                   << "== 2. Interact with an NPC\n"
                   << "== 3. Face an obstacle\n"
                   << "== 4. Observe the structure\n"
                   << "== 5. Quit\n"
                   << "== ====================================================\n"
                   << "== == Choice: ";

        int choice = readChoice(6);
        switch (choice)
        {
            case 1: terrain->observe(); break;
            case 2: npc->observe(); break;
            case 3: obstacle->observe(); break;
            case 4: structure->observe(); break;
            case 5: running = false; break;
            default: std::cout << "== Invalid choice, please try again.\n"; break;
        }
    }


    delete terrain;
    delete npc;
    delete obstacle;
    delete structure;
    delete factory;
}

int main()
{
    // A traveller and a trip, reused across the whole session.
    Traveller* traveller = new Traveller();
    traveller->setState(new FootMovement());

    Route* route = new Route();
    route->setStrategy(new ShortestRoute());

    // A small starting world: two locations nested inside a region.
    Region* region = new Region();
    region->add(new Location());
    region->add(new Location());
    region->add(new Location());

    bool running = true;
    while (running)
    {
        std::cout << "\n================ WAYFARER ================\n";
        printTravellerStatus(traveller);
        std::cout << "1. Move\n"
                   << "2. Choose route strategy\n"
                   << "3. View the map\n"
                   << "4. Decorate a location\n"
                   << "5. Enter a biome\n"
                   << "6. Quit\n"
                   << "Choice: ";

        int choice = readChoice(6);
        switch (choice)
        {
            case 1: handleMove(traveller); break;
            case 2: handleRoute(route); break;
            case 3: region->print(); break;
            case 4: handleDecorate(region); break;
            case 5: handleBiome(); break;
            case 6: running = false; break;
            default: std::cout << "Invalid choice, please try again.\n"; break;
        }
    }

    delete traveller;
    delete route;
    delete region; // deletes every location and every decorator wrapped around them

    std::cout << "Safe travels!\n";
    return 0;
}