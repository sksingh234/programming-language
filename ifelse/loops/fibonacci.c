#include <stdio.h>
int main()
{
    int n;
    printf("enter the value:");
    scanf("%d", &n);
    int x = 1, y = 1, sum = 1;
    for (int i = 1; i <= n-2; i++)
    {
        sum =x + y;
        x = y;
        y = sum;
    }
    printf("the %dth fibonacci no is %d\n", n, sum);
    return 0;
}