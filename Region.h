#include <iostream>
#include <vector>

#include "Map.h"

class Region : public Map
{
public:
    Region();
    ~Region();
    void add(Map* child);
    void remove(std::string);
    Map* getMap(int);
    void print() override;
    std::string getName() override;
private:
    std::vector<Map*> maps;
    std::string name;
};


