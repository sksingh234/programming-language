#include <stdio.h>
int main()
{

    int n;
    printf("enter the no:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        if (n % 2 != 0)
        {
            printf("%d\n", i);
            continue;
        }

    return 0;
}