#include <stdio.h>
int main()
{
    int n;
    printf("enter the value of rows:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i == 1 || i == n)
        {
            for ( int j  = 1; j <=  (n*2)-2; j++)
            {
                printf("*");
            }
            
        }
        else
        for (int k = 1; k <=  (n*2)-2; k++)
        {
            if (k == 1 || k == (n*2)-2)
            {
                printf("*");
            }
            else
            printf(" ");
         }
        printf("\n");
    }
     return 0;
}
