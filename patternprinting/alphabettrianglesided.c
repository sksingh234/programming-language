#include <stdio.h>
int main()
{
    int n;
    printf("enter the value of lines:");
    scanf("%d", &n);
    

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
            printf(" "); 
            int a = 1;
        for (int k = 1; k <= i; k++)
            {
                char ch = (char)a+64;
                 printf("%c",ch);
                 a++;
            }
        printf("\n");
    }

    return 0;
}