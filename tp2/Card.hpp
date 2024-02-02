#pragma once

#include <string>

class Card{
public:
Card(unsigned int value, std::string color);
void print() const;
bool operator==(Card other) const;
bool operator<(Card other) const;

// pour Q bonus 10
std::string showValue() const;

// pour Q bonus 11
friend std::ostream& operator<<(std::ostream& stream, Card card);


private:
unsigned int _value;
std::string _color;
};