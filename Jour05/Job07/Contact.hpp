#pragma once

class Contact
{
private:

public:
    std::string nom;
    int numero;
    Contact(std::string nom, int numero);
    Contact(const Contact &c);
    ~Contact();
};
