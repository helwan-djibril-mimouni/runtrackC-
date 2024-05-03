#include <iostream>
#include <string>

int main() {
    int x = 1;
    int y = 2;
    int z = 3;
    int* ptr1 = &x;
    int* ptr2 = &y;
    int* ptr3 = &z;
    std::cout << "x = " << *ptr1 << std::endl;
    std::cout << "y = " << *ptr2 << std::endl;
    std::cout << "z = " << *ptr3 << std::endl;
    *ptr1 = 4;
    *ptr2 = 5;
    *ptr3 = 6;
    std::cout << "new x = " << x << std::endl;
    std::cout << "new y = " << y << std::endl;
    std::cout << "new z = " << z << std::endl;
}