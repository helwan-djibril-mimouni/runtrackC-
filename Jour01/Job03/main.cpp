#include <iostream>

void printHello(int n){
    for (int i = 0; i < n; i++)
    {
        std::cout << "Hello World" << std::endl;
    }
    
}
 
int main()
{
    int n;
    std::cout << "How many Hello World : ";
    std::cin >> n;
    printHello(n);
}