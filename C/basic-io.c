#include <stdio.h>
int main(){
    // Variables
    int a = 5;
    int b;
    b = 10;
    int sum = a + b;
    printf("%s %d\n","the sum is : ",sum);
    
    // Receiving Inputs from the users
    // --- INTEGER
    printf("Please Enter a Number : \n");
    int num;
    scanf("%d",&num);
    printf("%s %d\n","You Entered : ",num);
    // --- STRING
    printf("%s","Enter Your Name\n");
    char name[100];
    scanf("%20s",name); // here & is not needed because name is an array
    printf("%s %s\n","Your Name is ",name);
}