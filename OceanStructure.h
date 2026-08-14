#pragma once

#include "Structure.h"

class OceanStructure : public Structure
{
private:
public:
    OceanStructure();
    ~OceanStructure();
    void observe() override;
};

