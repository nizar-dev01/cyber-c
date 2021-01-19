#include <stdio.h>

int square(int x){
    return x*x;
}

int power(int base,int power){
    int total = 1;
    for (size_t i = 0; i < power; i++)
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
    for (size_t i = 0; i < size; i++)
    {
        if(arr[i] > largest) largest = arr[i];
    }
    return largest;
}

int main(){
    int sq = square(3);
    printf("%s : %d\n", "Square of 3", sq);
    
    int pw = power(3,3);
    printf("3 to the 3 : %d\n", pw);

    int pow = recPow(3,3);
    printf("3 to the 3 : %d (Found using recursive function)\n\n", pow);

    int x = 5;
    printf("x before changing the value %d\n", x);
    changeVal(&x);
    printf("x after changing the value  %d\n", x);

    int ages[] = { 2, 10, 85, 33, 67, 13, 32, 28, 91, 1 };
    int const size = sizeof(ages) / sizeof(ages[0]);
    printf("The oldest person is %d years old\n", findOldest(ages, size));

    return 0;
}
