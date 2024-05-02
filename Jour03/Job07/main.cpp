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
    std::cout << "Biggest number : ";
    int biggerNum = NULL;
    for (int x : T){
        if (biggerNum == NULL){
            biggerNum = x;
        }
        else if (biggerNum < x){
            biggerNum = x;
        }
    }
    std::cout << biggerNum << " ";
}