#include <stdio.h>
int main()
{
    int n;
    printf(" enter the value:");
    scanf("%d", &n);
    int fac = 1;
    for (int i = 1; i <= n; i++)

    {
        fac = fac * i;
    }
    printf(" the factorial of %d is %d",n, fac);
    return 0;
}