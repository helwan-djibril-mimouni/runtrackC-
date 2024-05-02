#include <iostream>

void functionWhile(){
    int i, n, som;
    som = 0;
    i = 0;
    while(i<4)
    {
        std::cout << "donnez un entier";
        std::cin >> n ;
        som += n;
        i++;
    }
    std::cout << "Somme : " << som ;
}

void functionDoWhile(){
    int i, n, som;
    som = 0;
    i = 0;
    do{
        std::cout << "donnez un entier";
        std::cin >> n ;
        som += n;
        i++;
    }
    while(i<4);
    
    std::cout << "Somme : " << som ;
}

int main()
{
    std::cout << "Function with while :" << std::endl;
    functionWhile();
    std::cout << std::endl;
    std::cout << "Function with while :" << std::endl;
    functionDoWhile();
}