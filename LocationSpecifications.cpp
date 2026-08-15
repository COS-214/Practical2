#include <iostream>

#include "LocationSpecifications.h"


LocationSpecifications::LocationSpecifications(Map* location) {
    this->location = location;
}

LocationSpecifications::~LocationSpecifications() {
    delete location;
}
