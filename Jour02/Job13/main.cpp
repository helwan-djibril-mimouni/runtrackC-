#include <iostream>

int main()
{
    for (size_t i = 0; i <= 10; i++)
    {
        for (size_t j = 0; j <= 10; j++)
        {
            if (i==0 && j==0){
                std::cout << "  |";
            }
            else if (i == 0){
                std::cout << j << "  ";
            }
            else if (j == 0){
                if (i != 10){
                    std::cout << i << " |";
                }
                else{
                    std::cout << i << "|";
                }
            }
            else{
                if (i*j < 10){
                    std::cout << i*j << "  ";
                }
                else {
                    std::cout << i*j << " ";
                }
            }
        }
        std::cout << std::endl;
        if (i == 0){
            std::cout << "---------------------------------" << std::endl;
        }
    }
}