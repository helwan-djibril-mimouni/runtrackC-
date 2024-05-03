#include <iostream>
#include <string>

int main() {
    int T[10] = {1, 3, 7, 2, 9, 4, 10, 5, 6, 8};
    int x = NULL;
    for (int i : T){
        if (x == NULL){
            x = i;
        }
        else if (x < i){
            x = i;
        }
    }
    std::cout << "Highest : " << x;
}