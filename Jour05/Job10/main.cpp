#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Chat.hpp"
#include "Chien.hpp"

void Chien::crier()
{
    std::cout << "Woof !" << std::endl;
}

void Chien::manger()
{
    std::cout << "Le chien a une alimentation variee" << std::endl;
}

void Chat::crier()
{
    std::cout << "Miaou !" << std::endl;
}

void Chat::manger(std::string s)
{
    if (s == "des croquettes"){
        std::cout << "Le chat mange des croquettes" << std::endl;
    }
    std::cout << "Le chat mange du poisson" << std::endl;
}

int main(){
    Chat cat;
    Chien dog;
    cat.crier();
    cat.manger("");
    cat.manger("des croquettes");
    dog.crier();
    dog.manger();
}