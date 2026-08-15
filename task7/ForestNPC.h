#pragma once

#include "NPC.h"

class ForestNPC : public NPC
{
private:
public:
    ForestNPC();
    ~ForestNPC();
    void observe() override;
};

