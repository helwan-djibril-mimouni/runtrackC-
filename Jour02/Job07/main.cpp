#include <iostream>

int main()
{
    int s;
    std::cout << "Start : ";
    std::cin >> s;
    int e;
    std::cout << "End : ";
    std::cin >> e;
    for (int i = s; i <= e; i++)
    {
        std::cout << i << std::endl;
    }    
}