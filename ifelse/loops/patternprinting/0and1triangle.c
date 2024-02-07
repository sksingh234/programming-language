#include <stdio.h>
int main()
{
    int n;
    printf("enter the value of rows:");
    scanf("%d", &n);
    int a = 1;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            if (j % 2 != 0)
            {
                printf("%d ", a);
                a = 0;
            }
            else
            {
                printf("%d ", a);
                a = 1;
            }
        }
        printf("\n");
    }
    return 0;
}
