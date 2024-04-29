#include <iostream>
 
int higherNumber(int a, int b, int c){
    if (a > b && a > c){
        return a;
    }
    else if (b > a && b > c){
        return b;
    }
    return c;
}

int main()
{
    int a;
    std::cout << "a : ";
    std::cin >> a;
    int b;
    std::cout << "b : ";
    std::cin >> b;
    int c;
    std::cout << "c : ";
    std::cin >> c;
    int num = higherNumber(a, b, c);
    std::cout << num << " is the highest number";
}