#include "Player.hpp"
#include "Card.hpp"

#include <iostream>

int main(){
    const Card c1 { 8, "Pique" };
    c1.print();

    // La classe Card
    // Q7
    const Card c2 { 8, "Carreau" };
    std::cout << (c2 == c1) << std::endl; // -> 1
    const Card c3 { 10, "Carreau" };
    std::cout << (c2 == c3) << std::endl; // -> 0 

    // Q9
    std::cout << (c1 < c2) << std::endl; // -> 0
    std::cout << (c1 < c3) << std::endl; // -> 1
    std::cout << (c3 < c1) << std::endl; // -> 0


    // La classe Player
    Player p1 { "Gerald" };
    Player p2 { "Julien" };
    Player::deal_all_cards(p1, p2);

    // for (auto i = 0; i < 16; ++i)
    // {
    //     std::cout << p1[i] << std::endl;
    //     std::cout << p2[i] << std::endl;
    // }

    // Le jeu
    Player::play(p1, p2);
    std::cout << "Score p1: " << p1.get_score() << std::endl;
    std::cout << "Score p2: " << p2.get_score() << std::endl;
}