#include <iostream>
#include <string>

int main() {
    int number = 2019;
    int* ptr = &number;
    std::cout << "valeur : " << *ptr;

    return 0;
}