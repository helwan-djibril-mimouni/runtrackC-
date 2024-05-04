#pragma once

class Joueur {
public:
    int x;
    int y;
    Joueur(int x, int y);
    ~Joueur();
    int getX();
    int getY();
    void Move(int x, int y);
};