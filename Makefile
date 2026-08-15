CXX = g++
CXXFLAGS = -std=c++11 -Wall

SOURCES = main.cpp \
          AirMovement.cpp \
          BestRoute.cpp \
          BicycleMovement.cpp \
          CarMovement.cpp \
          CheaperRoute.cpp \
          CityFactory.cpp \
          CityNPC.cpp \
          CityObstacle.cpp \
          CityStructure.cpp \
          CityTerrain.cpp \
          DesertFactory.cpp \
          DesertNPC.cpp \
          DesertObstacle.cpp \
          DesertStructure.cpp \
          DesertTerrain.cpp \
          FastestRoute.cpp \
          FootMovement.cpp \
          ForestFactory.cpp \
          ForestNPC.cpp \
          ForestObstacle.cpp \
          ForestStructure.cpp \
          ForestTerrain.cpp \
          Location.cpp \
          Locations.cpp \
          LocationSpecifications.cpp \
          Map.cpp \
          NPC.cpp \
          Obstacle.cpp \
		  OceanNPC.cpp \
          OceanFactory.cpp \
          OceanObstacle.cpp \
          OceanStructure.cpp \
          OceanTerrain.cpp \
          Quest.cpp \
          Region.cpp \
          Route.cpp \
          RouteStrategy.cpp \
          ScenicRoute.cpp \
          ShortestRoute.cpp \
          Structure.cpp \
          Terrain.cpp \
          Toll.cpp \
          TrainMovement.cpp \
          Traveller.cpp \
          Weather.cpp \
          WorldBuilder.cpp

TARGET =  wayfarer

all: $(TARGET)

$(TARGET): $(SOURCES)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SOURCES)

clean:
	rm -f $(TARGET)

.PHONY: all clean