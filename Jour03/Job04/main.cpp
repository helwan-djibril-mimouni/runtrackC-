#include <iostream>
#include <string>

int main()
{
    std::string sentence = "Vive la plateforme !";
    int count = 0;
    for (char l : sentence){
        l = l;
        count += 1;
    }
    std::cout << "La taille est " << count;
}