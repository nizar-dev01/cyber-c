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
