#include <iostream>
#include <string>

int main() {
    static int tab[3] = {1, 2, 3};
    std::cout << "tab1 : " << &tab[0] << std::endl;
    std::cout << "tab2 : " << &tab[1] << std::endl;
    std::cout << "tab3 : " << &tab[2] << std::endl;
}