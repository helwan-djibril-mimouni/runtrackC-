#include <iostream>
#include <string>

int main() {
    int x = 12;
    std::cout << "x = " << x << std::endl;
    int &y = x;
    y = 13;
    std::cout << "x = " << x << std::endl;
}