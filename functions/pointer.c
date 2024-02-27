#include <stdio.h>
int main()
{
    int a = 5;
    // int* x = &a;
    // int* x;
    // x = &a;
    int* x = &a;
    *x = 6416;
    // printf("%p  ", x);
    // printf("%p  ", &a);
    // printf("%p  ", &x);
    // int b = 5;
    // printf("%p", &b);
    printf("%d  ", *x);
     return 0;
}