#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::string sentence;
    std::cout << "string :" << std::endl;
    std::getline(std::cin, sentence);
    std::vector<char> T;
    for (char c : sentence){
        T.push_back(c);
    }
    T.push_back('\0');
    std::cout << "new string : ";
    for (int i = 0; i < T.size(); i++)
    {
        std::cout << T[i];
    }
    
}