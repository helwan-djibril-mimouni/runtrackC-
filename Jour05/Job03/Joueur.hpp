#pragma once

class Joueur {
public:
    int x;
    int y;
    std::string name;
    Joueur();
    Joueur(int x, int y);
    Joueur(int x, int y, std::string name);
    ~Joueur();
    int getX();
    int getY();
    void Move(int x, int y);
};