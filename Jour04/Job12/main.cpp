#include <iostream>
#include <string>
#include <vector>

struct Member
{
    std::string nom;
    std::string prenom;
};

struct Staff
{
    std::vector<Member> members;
};

struct Etudiant
{
    std::string nom;
    std::string prenom;
};


int main() {
    Member alicia;
    alicia.nom = "Cordial";
    alicia.prenom = "Alicia";
    Member pierre;
    pierre.nom = "Malardier";
    pierre.prenom = "Pierre";
    std::cout << "Staff" << std::endl;
    std::cout << alicia.prenom << " " << alicia.nom << " et " << pierre.prenom << " " << pierre.nom << std::endl << std::endl;
    
    int n;
    std::cout << "How many students ?" << std::endl;
    std::cin >> n;
    Etudiant list[n];
    for (int i = 0; i < n; i++)
    {
        std::cout << "Student " << i << std::endl;
        std::string prenom;
        std::cout << "First Name : ";
        std::cin >> prenom;
        std::string nom;
        std::cout << "Last Name : ";
        std::cin >> nom;
        Etudiant e;
        e.nom = nom;
        e.prenom = prenom;
        list[i] = e;
    }
    std::cout << "Student list" << std::endl;
    for (int j = 0; j < n; j++)
    {
        Etudiant e = list[j];
        std::cout << e.prenom << std::endl;
    }
}