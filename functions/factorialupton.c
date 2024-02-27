#include <stdio.h>
void factorial(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact = fact * i;
        printf("factorial of %d is %d",i,fact);
        printf("\n");
    }
    return;
}
int main()
{
    int a;
    printf("enter value of number : ");
    scanf("%d", &a);
    factorial(a);
    return 0;
}