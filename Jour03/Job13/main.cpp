#include <iostream>
#include <string>

void fuseSortedArrays(int T1[], int size1, int T2[], int size2, int T[]){
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < size1+size2; i++)
    {
        if (T1[count1] < T2[count2]){
            T[i] = T1[count1];
            count1++;
        }
        else{
            T[i] = T2[count2];
            count2++;            
        }
    }
}

int main() {
    int T1[5] = {2, 4, 5, 6, 10};
    int T2[5] = {1, 3, 7, 8, 9};
    int size1 = sizeof(T1)/sizeof(int);
    int size2 = sizeof(T2)/sizeof(int);
    int T[size1+size2];
    fuseSortedArrays(T1, size1, T2, size2, T);
    std::cout << "Array : ";
    for ( int i = 0; i < 10; i++ ) {
        std::cout << T[i] << " ";
    }

    return 0;
}