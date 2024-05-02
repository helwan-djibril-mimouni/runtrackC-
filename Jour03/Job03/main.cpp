#include <iostream>
#include <string>
#include <bits/stdc++.h>

int sameChar(char l1, char l2){
    if (l1 == l2){
        return 0;
    }
    return 1;
}

int sameString(std::string l1, std::string l2){
    bool correct = true;
    if (l1.length() != l2.length()){
        correct = false;
    }
    else{
        for (int i = 0; i < l1.length(); i++)
        {
            if (sameChar(l1[i], l2[i]) != 0){
                correct = false;
            }
        }        
    }
    if (correct){
        return 0;
    }
    return 1;
}

int main()
{
    std::string l1;
    std::cout << "string 1 :" << std::endl;
    std::getline(std::cin, l1);
    std::string l2;
    std::cout << "string 2 :" << std::endl;
    std::getline(std::cin, l2);
    if (sameString(l1, l2) == 0){
        std::cout << l1 << " == " << l2;
    }
    else{
        std::cout << l1 << " != " << l2;
    }
}