#pragma once
#include "Animal.hpp"

class Chat : public Animal
{
public: 
    void crier();
    void manger(std::string s);
};