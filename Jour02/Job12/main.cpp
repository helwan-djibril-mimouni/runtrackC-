#include <iostream>

int main()
{
    int n;
    std::cout << "n : ";
    std::cin >> n;
    double result = 0;
    if (n != 0){
        for (int i = 1; i <= n; i++)
        {
            result += 1.0/i;
        }
    }
    std::cout << n << " => " << result;
}