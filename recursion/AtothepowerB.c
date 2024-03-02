#include <stdio.h>
int pow(int n, int x)
{
    if (x == 0)
        return 1;
    return n * pow(n, x - 1);
}
int main()
{
    int a;
    printf("enter base:");
    scanf("%d", &a);
    int b;
    printf("enter exponent:");
    scanf("%d", &b);
    int power = pow(a, b);
    printf("%d to the power %d is %d", a, b, power);
    return 0;
}