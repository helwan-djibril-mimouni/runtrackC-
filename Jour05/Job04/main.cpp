#include <iostream>
#include <string>
#include "Joueur.hpp"

Joueur::Joueur()
{
}

Joueur::Joueur(int x, int y) : x(x), y(y)
{
}

Joueur::Joueur(int x, int y, std::string name) : x(x), y(y), name(name)
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

std::string Joueur::getName(){
    return this->name;
}

void Joueur::setX(int x){
    this->x = x;
}

void Joueur::setY(int y){
    this->y = y;
}

void Joueur::setName(std::string name){
    this->name = name;
}

void Joueur::Move(int x, int y){
    this->x = x;
    this->y = y;
}

int main() {
    Joueur j1 = Joueur();
    Joueur j2 = Joueur(3, 0);
    Joueur j3 = Joueur(5, 0, "Player");
    std::cout << "Player 1 at (" << j1.getX() << "," << j1.getY() << ")" << std::endl;
    std::cout << "Player 2 at (" << j2.getX() << "," << j2.getY() << ")" << std::endl;
    std::cout << "Player 3 at (" << j3.getX() << "," << j3.getY() << ")" << std::endl;
}