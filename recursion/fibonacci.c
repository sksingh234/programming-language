#include <stdio.h>
int fibonacci(int x)
{
    if (x == 1 || x == 2)
        return 1;
    else
        return fibonacci(x - 1) + fibonacci(x - 2);
}
int main()
{
    int n;
    printf("enter the value of n:");
    scanf("%d", &n);
    int fi = fibonacci(n);
    printf("%dth fibonacci no is %d:", n, fi);
    return 0;
}