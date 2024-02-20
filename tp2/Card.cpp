#include "Card.hpp"
#include <iostream>

Card::Card(unsigned int value, std::string color)
    : _value { value }, _color { color}
{}

void Card::print() const {
    std::cout << showValue() << " de " << _color << std::endl;
}

bool Card::operator==(Card other) const {
    return _value == other._value;
}

bool Card::operator<(Card other) const {
    return _value < other._value;
}

std::string Card::showValue() const {
    std::string res;
    switch (_value) {
    case 11:
        res = "Valet";
        break;
    case 12:
        res = "Dame";
        break;
    case 13:
        res = "Roi";
        break;
    case 14:
        res = "As";
        break;
    default:
        res = std::to_string(_value) ;
    }
    return res;
}


std::ostream& operator<<(std::ostream& stream, Card card){
    stream << card.showValue() << " de " << card._color;
    return stream;
}