#include <stdio.h>
int main()
{
    int n;
    printf("enter the value of lines:");
    scanf("%d", &n);
    int no = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
            printf(" ");
        for (int k = 1; k <= no; k++)
        {
            printf("%d", k);
        }
        no = no + 2;
        printf("\n");
    }

    return 0;
}