#include <stdio.h>
int powerlog(int n, int x)
{
    if (x == 0)
        return 1;
    int dabba = powerlog(n, x / 2);
    if (x % 2 == 0)
        return dabba * dabba;
    else
        return dabba * dabba * n;
}
int main()
{
    int a;
    printf("enter base:");
    scanf("%d", &a);
    int b;
    printf("enter exponent:");
    scanf("%d", &b);
    int power = powerlog(a, b);
    printf("%d to the power %d is %d", a, b, power);
    return 0;
}