#include <iostream>
#include <string>

int main(){
    // a. i est un int
    int i = 4;
    (i += 4) += 3;
    std::cout << i << std::endl;


    // d. str est une std::string
    std::string str;
    (str += "aaaa") += "b";
    std::cout << str << std::endl;
}