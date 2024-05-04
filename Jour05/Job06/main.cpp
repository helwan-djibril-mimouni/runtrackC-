#include <iostream>
#include <string>
#include <cmath>
#include "Personne.hpp"

Personne::Personne(std::string name, int hp, float defense)
    : name(name), hp(hp), defense(defense)
{
}

Personne::~Personne()
{
}

std::string Personne::getName(){
    return this->name;
}

int Personne::getHP(){
    return this->hp;
}

float Personne::getDefense(){
    return this->defense;
}

int Personne::getHit(int attack){
    this->hp -= std::floor(attack/defense);
}