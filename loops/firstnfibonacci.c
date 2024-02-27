#include <stdio.h>
int main()
{
    int n;
    printf("enter the value:");
    scanf("%d", &n);
    int x = 0, y = 1, sum;
    printf("the first fibonacci no is 1\n");
    for (int i = 2; i <= n; i++)
    {
        sum = x + y;
        printf("the %dth fibonacci no is %d\n", i, sum);
        x = y;
        y = sum;
    }

    return 0;
}