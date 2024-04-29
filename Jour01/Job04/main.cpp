#include <iostream>
 
int addNum(int a, int b){
    return a + b;
}

int main()
{
    int a;
    int b;
    std::cout << "a : ";
    std::cin >> a;
    std::cout << "b : ";
    std::cin >> b;
    int c = addNum(a, b);
    std::cout << a << " + " << b << " = " << c;
}