#include "Person.hpp"
#include <string>

Person::Person(std::string first_name, std::string surname)
        : first_name {first_name}
        , surname {surname}
{}

std::string Person::get_first_name()
{
    return first_name;
}

std::string Person::get_surname()
{
    return surname;
}
