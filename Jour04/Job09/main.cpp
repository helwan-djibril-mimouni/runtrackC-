#include <iostream>
#include <string>

int main() {
    int n;
    std::cout << "Size of array : ";
    std::cin >> n;
    int* T = (int *)malloc(n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        int x;
        std::cout << "x" << i << " : ";
        std::cin >> x;
        T[i] = x;
    }
    std::cout << "Array : ";    
    for (int i = 0; i < n; i++)
    {
        std::cout << T[i] << " ";
    }
}