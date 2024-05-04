#pragma once

class Etudiant
{
private:
    std::string f_name;
    std::string l_name;
    int age;
    int id;

public:
    Etudiant(std::string f_name, std::string l_name, int age, int id);
    ~Etudiant();
};
