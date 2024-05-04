#include <iostream>
#include <string>
#include "Contact.hpp"

Contact::Contact(std::string nom, int numero)
    : nom(nom), numero(numero)
{
}

Contact::Contact(const Contact& c)
    : nom(c.nom), numero(c.numero)
{
}

Contact::~Contact()
{
}

int main(){
    Contact c1 = Contact("Name 1", 123);
    Contact c2 = Contact("Name 2", 456);
    Contact c3 = Contact("Name 3", 789);
    Contact c1_2 = Contact(c1);
    Contact c2_2 = Contact(c2);
    Contact c3_2 = Contact(c3);
    c1_2.nom = "Name 4";
    c1_2.numero = 147;
    c2_2.nom = "Name 5";
    c2_2.numero = 258;
    c3_2.nom = "Name 6";
    c3_2.numero = 369;
    std::cout << c1.nom << " : " << c1.numero << std::endl;
    std::cout << c2.nom << " : " << c2.numero << std::endl;
    std::cout << c3.nom << " : " << c3.numero << std::endl;
    std::cout << c1_2.nom << " : " << c1_2.numero << std::endl;
    std::cout << c2_2.nom << " : " << c2_2.numero << std::endl;
    std::cout << c3_2.nom << " : " << c3_2.numero << std::endl;
}