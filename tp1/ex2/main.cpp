#include "Person.hpp"
#include <iostream>
#include <vector>

int main()
{
    // Question 1 à 4
    // Person p {};
    // p.first_name = "Palluche";
    // p.surname = "La Faluche";
    // std::cout << "La personne s'appelle " << p.first_name << " " << p.surname << std::endl;

    // Question 5
    // Person p {"Palluche", "La Faluche"};
    // std::cout << "La personne s'appelle " << p.get_first_name() << " " << p.get_surname() << std::endl;

    // Question 6
    std::vector<Person> persons;
    auto nb = 0;
    std::cout << "Nombre de personnes: ";
    std::cin >> nb;
    
    for (int i = 0; i < nb; i++)
    {
        std::string first_name;
        std::string surname;
        
        std::cout << "Prenom: ";
        std::cin >> first_name;

        std::cout << "Nom: ";
        std::cin >> surname;

        Person p {first_name, surname};
        persons.emplace_back(p);
    }

    std::cout << "Les personnes sont";
    std::string sep = " ";
    for (auto p: persons){
        std::cout << sep << p.get_first_name() << " " << p.get_surname();
        sep = ", ";
    }
    std::cout << '.' << std::endl;
}
