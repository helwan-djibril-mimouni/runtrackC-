#include <iostream>
#include <cmath>

int main()
{
    int n;
    std::cout << "n : ";
    std::cin >> n;
    int sumOfPowers = 0;
    int numOfDigits = 1;
    for (int i = 10; i < n; i*=10){
        numOfDigits++;
    }
    for (int i = 1; i < n; i*=10)
    {
        int p = (n%(i*10))/(i);
        sumOfPowers += pow(p, numOfDigits);
    }
    if (sumOfPowers == n){
        std::cout << n << " is a narcissistic number";
    }
    else{
        std::cout << n << " is not a narcissistic number";
    }
}