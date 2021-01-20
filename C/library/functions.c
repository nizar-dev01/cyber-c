#include "functions.h"

int square(int x){
    return x*x;
}

int power(int base,int power){
    int total = 1;
    for (int i = 0; i < power; i++)
    {
        total *= base;
    }
    return total;
}

int recPow(int base, int pow){
    if(pow < 1) return 1;
    return base * recPow(base, pow - 1);
}

void changeVal(int *input){
    *input *= *input;
}

int findOldest(int arr[], int size){
    int largest = arr[0];
    for (int i = 0; i < size; i++)
    {
        if(arr[i] > largest) largest = arr[i];
    }
    return largest;
}