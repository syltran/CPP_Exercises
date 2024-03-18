#pragma once
#include "Entity.hpp"
#include "Trap.hpp"
#include "Potion.hpp"
#include "Logger.hpp"

class Character : public Entity
{
public:
    Character(int x, int y)
        : Entity {x, y}
    {}

    ~Character()
    {
        logger << "A character died at position (" << _x << "," << _y << ")";
    }

    char get_representation() const override { return shape; }

    void interact_with(Entity& entity) override {
        auto* trap = dynamic_cast<Trap*>(&entity);
        if (trap != nullptr)
        {
            // entity est bien une instance de Trap
            Item* t = trap;
            t->consume();
            if (shape == 'O'){
                shape = 'o';
            }
            else {
                shape = ' ';
            }
        }

        auto* potion = dynamic_cast<Potion*>(&entity);
        if (potion != nullptr){
            if (shape == 'o'){
                shape = 'O';
                Item* p = potion;
                p->consume();
            }
        }
    }

    bool should_destroy() const override { return shape == ' '; }

private:
    char shape = 'O';
};