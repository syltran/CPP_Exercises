#pragma once
#include "Card.hpp"

#include <string>
#include <vector>

class Player
{
public:
Player(std::string name);
static void deal_all_cards(Player& p1, Player& p2);

Card operator[](int index) const
{
    return _cards[index];
}

inline static int turn_number = 0;
static bool play(Player& p1, Player& p2);

unsigned int get_score() const {
    return _score;
}

private:
std::string _name;
std::vector<Card> _cards;
unsigned int _score = 0;
};