#include <stdio.h>
int main()
{
    int n;
    printf("enter the value of rows:");
    scanf("%d", &n);
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 1; j <=i*2+1; j = j +2)
    //     {
    //         printf("%d",j);
    //     }
    //     printf("\n");
    // }
    for (int i = 1; i <=n; i++)
    {
        int a=1;
        for (int j = 1; j <= i; j++)
        {
            printf("%d",a);
            a=a+2;
        }
        printf("\n");
        
    }
    
    return 0;
}
