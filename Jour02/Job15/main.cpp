#include <iostream>

int main()
{
    int n;
    std::cout << "How many numbers in Fibonacci do you want : ";
    std::cin >> n;
    int lastNum;
    int currentNum;
    for (int i = 0; i < n; i++)
    {
        if (i==0){
            lastNum = 0;
            std::cout << "0, ";
        }
        else if (i == 1){
            currentNum = 1;
            std::cout << "1, ";
        }
        else{
            int temp = 0 + lastNum;
            lastNum = currentNum;
            currentNum += temp;
            std::cout << currentNum << ", ";
        }
    }
    std::cout << "etc...";
}