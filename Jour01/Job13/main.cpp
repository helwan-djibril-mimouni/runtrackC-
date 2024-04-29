#include <iostream>
 
int sumOfSquaresFromFive(int n){
    int result = 0;
    for (int i = 5; i <= n; i++)
    {
        result += i*i*i;
    }
    return result;
}

int main()
{
    int n;
    std::cout << "n : ";
    std::cin >> n;
    int sum = sumOfSquaresFromFive(n);
    std::cout << "Sum of squares starting from 5 : " << sum;
}