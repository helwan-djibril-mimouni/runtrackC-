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
    std::string getName();
    void setX(int x);
    void setY(int y);
    void setName(std::string name);
    void Move(int x, int y);
};