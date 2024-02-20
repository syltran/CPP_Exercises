#include "Player.hpp"

#include <algorithm>
#include <random>
#include <iostream>

Player::Player(std::string name)
    : _name { name }
{}

void Player::deal_all_cards(Player& p1, Player& p2){
    std::vector<Card> all_cards;
    std::vector<std::string> colors {"Trèfle", "Carreau", "Pique", "Coeur"};

    for (int value = 7; value < 15; value++){
        for (auto color :colors){
            all_cards.emplace_back(value, color);
        }
    }

    std::random_device rd;
    std::shuffle(all_cards.begin(), all_cards.end(), std::default_random_engine(rd()));

    int middle = all_cards.size() / 2;
    p1._cards.insert(p1._cards.begin(), all_cards.begin(), all_cards.begin() + middle);
    p2._cards.insert(p2._cards.begin(), all_cards.begin() + middle, all_cards.begin() + all_cards.size());
}

bool Player::play(Player& p1, Player& p2){
    for (auto i = 0; i < 16; ++i) {
        std::cout << "p1: " << p1[i] << " - p2: " << p2[i];
        if (p1[i] < p2[i]){
            p1._score++;
            std::cout << " --> p1 remporte le pli" << std::endl;
        } 
        else if (p2[i] < p1[i]){
            p2._score++;
            std::cout << " --> p2 remporte le pli" << std::endl;
        }
        else{
            std::cout << " --> égalité" << std::endl;
        }
        turn_number++;
    }
    return true;
}