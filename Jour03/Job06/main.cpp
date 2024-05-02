#include <iostream>
#include <string>

int main()
{
    int T[10];
    std::cout << "Enter 10 numbers" << std::endl;
    for (size_t i = 0; i < 10; i++)
    {
        int n;
        std::cout << "n" << i << " : ";
        std::cin >> n;
        T[i] = n;
    }
    std::cout << "Array : ";
    for (int x : T){
        std::cout << x << " ";
    }
    std::cout << std::endl;
    std::cout << "Numbers >5 : ";
    for (int x : T){
        if (x>5){
            std::cout << x << " ";
        }
    }
}