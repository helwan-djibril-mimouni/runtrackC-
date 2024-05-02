#include <cstdlib>
#include <ctime>
#include <iostream>

int main()
{
    std::srand(std::time(nullptr));
    int a = 1 + std::rand() / ((RAND_MAX + 1u) / 100);
    int b = 1 + std::rand() / ((RAND_MAX + 1u) / 100);
    while (b == a){
        int b = 1 + std::rand() / ((RAND_MAX + 1u) / 100);
    }
    int n;
    std::cout << "Guess a number between 1 and 100, if it's between our random numbers, you win : ";
    std::cin >> n;
    if (a < b){
        if (n>=a && n<=b){
            std::cout << "You win !" << std::endl;
            std::cout << "The numbers were " << a << " and " << b;
        }
        else{
            std::cout << "You lose..." << std::endl;
            std::cout << "The numbers were " << a << " and " << b;
        }
    }
    else{
        if (n>=b && n<=a){
            std::cout << "You win !" << std::endl;
            std::cout << "The numbers were " << b << " and " << a;
        }
        else{
            std::cout << "You lose..." << std::endl;
            std::cout << "The numbers were " << b << " and " << a;
        }
    }
}