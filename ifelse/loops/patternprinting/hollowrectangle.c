#include <stdio.h>
int main()
{
    int n;
    printf("enter the value of rows:");
    scanf("%d", &n);
    int m;
    printf("enter the value of columns:");
    scanf("%d", &m);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (j == 1 || j == n)
                printf("* ");
            else if (j == 1 || j == m)
                printf("* ");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
