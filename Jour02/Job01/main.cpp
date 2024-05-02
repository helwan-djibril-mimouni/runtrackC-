#include <iostream>

int main()
{
    int n;
    do{
        std::cout << "donnez un nombre >0 : ";
        std::cin >> n;
    }
    while (n<=0);
    return 0;
}