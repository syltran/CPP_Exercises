#pragma once
#include <string>

class Person
{
public:
    Person(std::string first_name,  std::string surname);
    std::string get_first_name();
    std::string get_surname();

private:
    std::string first_name;
    std::string surname;
};