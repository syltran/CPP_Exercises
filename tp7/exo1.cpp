#include <iostream>
#include <string>

class Animal
{
public:
    virtual void move() { std::cout << "Moving!" << std::endl; }

    void type() const { std::cout << "Animal" << std::endl; }
};

class Carnivore
{
public:
    void can_eat_meat() const { std::cout << "Yum!" << std::endl; }
    void can_eat_plant() const { std::cout << "Berk!" << std::endl; }
};

class Herbivore
{
public:
    virtual void can_eat_meat() const { std::cout << "Berk!" << std::endl; }
    virtual void can_eat_plant() const { std::cout << "Yum!" << std::endl; }
};

class Bird: public Animal, public Carnivore, public Herbivore
{
public:
    void move() const { std::cout << "Flying!" << std::endl; }
    void type() { std::cout << "Bird" << std::endl; }

    void can_eat_plant() { std::cout << "Miam!" << std::endl; }
};

class Tiger: public Animal, public Carnivore
{
public:
    void move() override { std::cout << "Running!" << std::endl; }
    void type() const { std::cout << "Tiger" << std::endl; }
    
    void can_eat_meat() const { std::cout << "Miam!" << std::endl; }
};

int main()
{
    Tiger tiger;
    Animal& tiger_as_animal = tiger;
    Carnivore& tiger_as_carn = tiger;

    Bird bird;
    Animal& bird_as_animal = bird;
    Herbivore& bird_as_herb = bird;
    Carnivore& bird_as_carn = bird;

    tiger.move();                  // I1
    tiger_as_animal.move();        // I2

    bird.move();                   // I3
    bird_as_animal.move();         // I4

    bird.can_eat_plant();          // I5
    bird_as_herb.can_eat_plant();  // I6
    bird_as_carn.can_eat_plant();  // I7

    tiger.can_eat_plant();         // I8
    tiger.can_eat_meat();          // I9
    tiger_as_carn.can_eat_meat();  // I10

    bird.type();                   // I11
    bird_as_animal.type();         // I12
    tiger_as_animal.type();        // I13

    return 0;
}