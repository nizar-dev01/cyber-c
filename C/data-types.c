#include <stdio.h>
#include <stdbool.h>

int main(){
    // -- INTEGER
    int a = 1;
    printf("%d\n",a);
    // -- DOUBLE
    double b = 2.22;
    printf("%f\n",b);
    // -- FLOAT
    float c = 3.75;
    printf("%f\n",c);
    // -- CHARACTER
    char d = 'a';
    printf("%c\n",d);
    // -- STRING
    char e[] = "String Format";
    printf("%s\n",e);
    // -- BOOLEAN
    bool f = true;
    printf("%d\n",f);
    // -- TYPE CASTING
    int n1 = 10;
    int n2 = 20;
    double n3 = (double) n1 / (double) n2;
    printf("%f\n",n3);
    double testN1 = 25 / 2 * 2; // 24
    double testN2 = (double)25 / 2 * 2; // 25
    printf("testN1 : %f\n",testN1);
    printf("testN2 : %f\n",testN2);
    return 0;
}