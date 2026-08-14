#pragma once

#include "Structure.h"

class ForestStructure : public Structure
{
private:
public:
    ForestStructure();
    ~ForestStructure();
    void observe() override;
};

