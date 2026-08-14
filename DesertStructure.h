#pragma once

#include "Structure.h"

class DesertStructure : public Structure
{
private:
public:
    DesertStructure();
    ~DesertStructure();
    void observe() override;
};

