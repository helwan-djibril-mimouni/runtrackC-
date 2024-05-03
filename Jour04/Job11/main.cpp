#include <iostream>
#include <string>

int main() {
    std::string fruit[5] = {"Banana", "Cherry", "Strawberry", "Mango", "Dragon Fruit"};
    std::cout << "My favorite fruits are ";
    for (std::string s : fruit){
        std::cout << s << ", ";
    }
    std::cout << "and many more" << std::endl;
    
    int n;
    std::cout << "How many favorite fruits do you have ?" << std::endl;
    std::cin >> n;
    std::string* favoris = (std::string *)malloc(n*sizeof(std::string));
    for (int i = 0; i < n; i++)
    {
        std::string s;
        std::cout << "Fruit " << i+1 << " : ";
        std::cin >> s;
        favoris[i] = s;
    }
    std::cout << "Your favorites are ";
    for (int i = 0; i < n; i++)
    {
        std::cout << favoris[i] << ", ";
    }
    std::cout << "and probably many more" << std::endl;
    free(favoris);
}