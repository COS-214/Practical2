#pragma once

#include "NPC.h"

class DesertNPC : public NPC
{
private:
public:
    DesertNPC();
    ~DesertNPC();
    void observe() override;
};

