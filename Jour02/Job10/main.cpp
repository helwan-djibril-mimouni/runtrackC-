#include <iostream>
#include <cmath>

int main()
{
    int n;
    bool running = true;
    do{
        std::cout << "Number to find square root of : ";
        std::cin >> n;
        if (n > 0){
            std::cout << "The square root of " << n << " is " << std::sqrt(n);
        }
        else if (n == 0){
            running = false;
        }
        else{
            std::cout << "You can't do the square root of a negative number";
        }
    }
    while (running);
}