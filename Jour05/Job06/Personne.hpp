#pragma once

class Personne
{
private:
    std::string name;
    int hp;
    float defense;
public:
    Personne(std::string name, int hp, float defense);
    ~Personne();
    std::string getName();
    int getHP();
    float getDefense();
    int getHit(int attack);
};