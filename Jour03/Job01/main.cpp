#include <iostream>
#include <algorithm>
#include <string>

int main()
{
    std::string sentence = "vive la plateforme !";
    std::transform(sentence.begin(), sentence.end(), sentence.begin(), ::toupper);
    std::cout << sentence;
}