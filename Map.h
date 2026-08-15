#include <iostream>

class Map
{
public:
    Map();
    virtual ~Map();
    virtual void print() = 0;
    virtual std::string getName() = 0;
};
