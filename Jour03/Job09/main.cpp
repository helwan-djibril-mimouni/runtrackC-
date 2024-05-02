#include <iostream>
#include <string>

bool areCharsEqual(char l1, char l2) {
    return l1 == l2;
}

bool areStringsEqual(const std::string& l1, const std::string& l2) {
    if (l1.length() != l2.length())
        return false;

    for (size_t i = 0; i < l1.length(); ++i) {
        if (!areCharsEqual(l1[i], l2[i]))
            return false;
    }
    return true;
}

bool containsString(const std::string& bigS, const std::string& s) {
    if (bigS.length() < s.length())
        return false;

    size_t len = s.length();
    for (size_t i = 0; i <= bigS.length() - len; ++i) {
        if (areStringsEqual(bigS.substr(i, len), s))
            return true;
    }
    return false;
}

int main() {
    std::string bigS;
    std::cout << "Enter string 1: " << std::endl;
    std::getline(std::cin, bigS);

    std::string s;
    std::cout << "Enter string to find inside string 1: " << std::endl;
    std::getline(std::cin, s);

    if (containsString(bigS, s)) {
        std::cout << bigS << " contains " << s << std::endl;
    } else {
        std::cout << bigS << " does not contain " << s << std::endl;
    }

    return 0;
}