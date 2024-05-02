#include <iostream>
#include <string>

bool isPalindrome(std::string s){
    int size = s.length();
    for (int i = 0; i < size; i++)
    {
        if (i < size-i){
            if(s[i] != s[size-i-1]){
                return false;
            }
        }
        else{
            return true;
        }
    }
}

int main() {
    std::string tab[5] = {"radar", "hello", "lvel", "stats", "world"};
    std::cout << "Palindromes : ";
    for (std::string s : tab){
        if (isPalindrome(s)){
            std::cout << s << " ";
        }
    }

    return 0;
}