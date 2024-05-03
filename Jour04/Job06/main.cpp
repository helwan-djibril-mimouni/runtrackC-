#include <iostream>
#include <string>

int main() {
    int entier = 17;
    double flottant = 3.14;
    double reel = 123.345;
    std::string caractere = "La Plateforme";
    std::cout << entier << " : " << &entier << std::endl;
    std::cout << flottant << " : " << &flottant << std::endl;
    std::cout << reel << " : " << &reel << std::endl;
    std::cout << caractere << " : " << &caractere << std::endl;
}