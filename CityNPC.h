#pragma once

#include "NPC.h"

class CityNPC : public NPC
{
private:
public:
    CityNPC();
    ~CityNPC();
    void observe() override;
};

