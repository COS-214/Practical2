#include <iostream>

#include "ForestNPC.h"

ForestNPC::ForestNPC()
{}

ForestNPC::~ForestNPC()
{}


void ForestNPC::observe()
{
    std::cout << "\n-- Monkey: Ooh-ooh-aah-aah!!\n";
    std::cout << "-- You:    Thank you!\n\n";
}
