#include <algorithm> 
#include <iostream>
#include <string>
 
void inverse(std::string *s){
    std::string str = *s; 
    std::reverse(str.begin(), str.end());
    *s = str;
}

int main()
{
    std::string s = "Plateforme";
    std::cout << "Before inverse : " << s << std::endl;
    inverse(&s);
    std::cout << "After inverse : " << s;
}