#include <cstdlib>
#include <ctime>
#include <iostream>

int main()
{
    std::srand(std::time(nullptr));
    int randomNum = 1 + std::rand() / ((RAND_MAX + 1u) / 100);
    bool running = true;
    int tries = 5;
    std::cout << "Mystery Number" << std::endl << std::endl;
    while (running){
        int n;
        std::cout << tries << " tries left" << std::endl;
        std::cout << "Guess a number between 1 and 100" << std::endl;
        std::cin >> n;

        if (randomNum != n){
            if (randomNum > n){
                std::cout << "Up !" << std::endl;
            }
            else{
                std::cout << "Down !" << std::endl;
            }
            tries--;
        }
        else{
            std::cout << "You win !" << std::endl;
            running = false;
        }
        if (tries < 0){
            std::cout << "You lose..." << std::endl;
            std::cout << "The number was " << randomNum;
            running = false;
        }
    }
}