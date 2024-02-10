#include <stdio.h>
int main()
{
    int n;
    printf("enter the value of lines:");
    scanf("%d", &n);
    int a = 1;
    int q = 1;
    for (int i = 1; i <= n * 2 + 1; i++)
    {
        if (i < n+1)
        {
            printf("%d", q);
            q++;
        }
        else
        {
            printf("%d",q);
            q--;
        }
    }
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        int no = 1;
        for (int j = 1; j <= n + 1 - i; j++)
        {
            printf("%d", no);
            no++;
        }
        for (int k = 1; k <= a; k++)
        {
            printf(" ");
        }
        for (int r = 1; r <= n + 1 - i; r++)
        {
            printf("%d", no-1);
            no--;
        }
        a = a + 2;
        printf("\n");
    }
    return 0;
}