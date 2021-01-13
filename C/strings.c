#include <stdio.h>
#include <string.h>

void print(char val[]){
    printf("%s\n", val);
}

int main(){
    char name[] = "Carolina";
    print(name);
    int nameLength = strlen(name);
    printf("%d\n", nameLength);
    char nameCopy[nameLength];
    strcpy(nameCopy, name);
    print("printing the copy");
    print(nameCopy);
    return 0;
}