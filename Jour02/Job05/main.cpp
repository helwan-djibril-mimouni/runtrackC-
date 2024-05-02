#include <iostream>

int main()
{
    int n;
    do{
        std::cout << "Note : ";
        std::cin >> n;
    }
    while (n<0 || n>20);
    if (n > 10){
        std::cout << "Validé";
    }
    else{
        std::cout << "Non validé";
    }
}