#include <iostream>
#include <string>

int main()
{
    std::string sentence = "vive la plateforme !";
    std::string result = "";
    for (char l : sentence){
        if (l != 'a' && l != 'e' && l != 'i' && l != 'o' && l != 'u' && l != 'y'){
            result += l;
        }
    }
    std::cout << result;
}