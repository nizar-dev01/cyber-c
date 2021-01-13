### Passing Values to `printf()`
Strings can be passed as
```c
  printf("Hello %s","Again\n");
```
Integers can be passed as
```c
  printf("%d",10 + 20);
```
If there are multiple values of different types
```c
  printf("%s %d\n","10 + 20 = ",10 + 20);
```
### Reading Values With `scanf()`
There are two arguments to be passed to `scanf()`
1. Type String
2. Pointer Address
```c
  int val;
  scanf("%d",&val);
```
Here, **&** in `&val` is used to refer to the pointer address of the variable `val`
### Strings
A string can be declared as a character array
```c
  char brother[6] = "Jacob";
  char sister[] = "Sarah";
```
While receiving string values from the user, it's a good idea to limit the length to prevent the null terminator (`\0`) from being overwitten.
```c
  char name[10];
  printf("Enter Your Name : \n");
  scanf("%9s",name);
```
To access string utility functions, we have to add `include <string.h>` header to the file. Then we can use functions like `strlen` or `strcpy`
