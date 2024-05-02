#include <iostream>
#include <string>

int sumOfInt(int T[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += T[i];
    }
    return sum;
}

int main() {
    int T[5] = {3, 4, 2, 7, 6};
    int sum = sumOfInt(T, sizeof(T)/sizeof(int));
    std::cout << "Sum = " << sum;

    return 0;
}