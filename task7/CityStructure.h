#pragma once

#include "Structure.h"

class CityStructure : public Structure
{
private:
public:
    CityStructure();
    ~CityStructure();
    void observe() override;
};

