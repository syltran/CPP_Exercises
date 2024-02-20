#include <iomanip>
#include <iostream>
#include <string>

int main()
{
    std::cout << "Entre ton nom: ";

    // 3)
    // char name[20] = "";
    // std::cin >> std::setw(20) >> name;
    // // std::cout << "Bonjour Palluche La Falluche !" << std::endl;
    // std::cout << name << std::endl;

    // 6)
    std::string name;
    std::cin >> name;
    std::cout << name << std::endl;
    return 0;
}
