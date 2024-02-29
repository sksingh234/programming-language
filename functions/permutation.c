#include <stdio.h>
int factorial(int x)
{
    int fact = 1;
    for (int i = 2; i <= x; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int permutation(int n, int r)
{
    int pcr = factorial(n) / factorial(n - r);
    return pcr;
}
int main()
{
    int n;
    printf("enter the value of n:");
    scanf("%d", &n);
    int r;
    printf("enter the value of r:");
    scanf("%d", &r);
    int pcr =  permutation(n, r);
    printf("%d", pcr);
    return 0;
}