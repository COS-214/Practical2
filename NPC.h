#pragma once

#include <iostream>

class NPC
{
private:
public:
    NPC();
    virtual ~NPC();
    virtual void observe() = 0;
};
