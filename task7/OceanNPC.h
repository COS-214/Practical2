#pragma once

#include "NPC.h"

class OceanNPC : public NPC
{
private:
public:
    OceanNPC();
    ~OceanNPC();
    void observe() override;
};

