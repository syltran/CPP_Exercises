#include <iostream>

int add(int a, int b)
{
    return a + b;
}

void add_to(int& a, int b)
{
    a += b;
}

int main()
{
    int x = 10;
    int y = add(x, x);
    add_to(y, 22);
    std::cout << x << " " << y << std::endl;
    return 0;
}