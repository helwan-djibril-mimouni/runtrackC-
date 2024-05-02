#include <iostream>

int main()
{
    int n;
    std::cout << "Number for factorial : ";
    std::cin >> n;
    long int result = 1;
    if (n != 0){
        for (int i = 1; i <= n; i++)
        {
            result *= i;
        }
    }
    std::cout << n << "! = " << result;
}