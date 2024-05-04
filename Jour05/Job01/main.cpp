#include <iostream>
#include <string>
#include "Joueur.hpp"

Joueur::Joueur(int x, int y) : x(x), y(y)
{
}

Joueur::~Joueur()
{
}

int Joueur::getX(){
    return this->x;
}

int Joueur::getY(){
    return this->y;
}

void Joueur::Move(int x, int y){
    this->x = x;
    this->y = y;
}

int main() {
    Joueur j = Joueur(3, 0);
    std::cout << "Player at (" << j.getX() << "," << j.getY() << ")" << std::endl;
    j.Move(5, 1);
    std::cout << "Player at (" << j.getX() << "," << j.getY() << ")" << std::endl;
}