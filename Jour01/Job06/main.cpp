#include <iostream>
 
void multiplicationTable(int x){
    for (int i = 1; i <= 10; i++)
    {
        std::cout << x << " * " << i << " = " << x*i << std::endl;
    }    
}

int main()
{
    int x;
    std::cout << "x : ";
    std::cin >> x;
    multiplicationTable(x);
}