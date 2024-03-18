#pragma once
#include "Entity.hpp"
#include "Item.hpp"

class Trap : public Item
{
public:
    Trap(int width, int height)
    // : Entity {random_value(1, width-1), random_value(1, height-1)}
    : Item {width, height}
    {}

    char get_representation() const override { return 'X'; }
    // void update() override {}
};