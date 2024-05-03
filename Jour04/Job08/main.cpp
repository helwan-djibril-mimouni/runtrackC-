#include <iostream>
#include <string>

int main() {
    int n = 2019;
    std::string s1 = "La Plateforme";
    double d = 3.14;
    std::string s2 = "Etudiants";
    void* tab[4];
    tab[0] = &n;
    tab[1] = &s1;
    tab[2] = &d;
    tab[3] = &s2;
    std::cout << tab[0] << " : " << n << std::endl;
    std::cout << tab[1] << " : " << s1 << std::endl;
    std::cout << tab[2] << " : " << d << std::endl;
    std::cout << tab[3] << " : " << s2 << std::endl;
} 