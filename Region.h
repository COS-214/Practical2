#pragma once
#include <iostream>
#include <vector>

#include "Map.h"

class Region : public Map
{
public:
    Region();
    ~Region();
    void add(Map* child);
    Map* getMap(int);
    void print() override;
    void setMap(int index, Map* newChild); 
    int size();
private:
    std::vector<Map*> maps;
};


