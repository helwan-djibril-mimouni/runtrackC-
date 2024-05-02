#include <iostream>
#include <string>

int main() {
    std::string string;
    std::cout << "Enter a string to ordre with 'Bonjour': " << std::endl;
    std::getline(std::cin, string);
    std::string bonjour = "Bonjour";
    int order = 0;
    for (int i = 0; i < bonjour.length(); i++)
    {
        char iStr = string[i];
        char iBonj = bonjour[i];
        if (toupper(iStr) < toupper(iBonj)){
            order = -1;
            break;
        }
        else if (string[i] > bonjour[i]){
            order = 1;
            break;
        }
    }
    std::cout << "Order : ";
    if (order <= 0){
        std::cout << string << ", ";
        std::cout << bonjour;
    }
    else{
        std::cout << bonjour << ", ";
        std::cout << string;
    }
    return 0;
}