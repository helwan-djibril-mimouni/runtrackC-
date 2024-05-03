#include <iostream>
#include <string>

int main() {
    int T[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        int &x = T[i];
        std::cout << x << std::endl;
    }    
}