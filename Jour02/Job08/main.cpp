#include <iostream>

int main()
{
    int s;
    std::cout << "Start : ";
    std::cin >> s;
    int e;
    std::cout << "End : ";
    std::cin >> e;
    int i = s;
    while (i <= e)
    {
        std::cout << i << std::endl;
        i++;
    }    
}