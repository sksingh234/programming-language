#include <stdio.h>
int main()
{
    int n;
    printf("enter the value of lines:");
    scanf("%d", &n);
      int a = 1;
      for (int i = 1; i <=n*2+1; i++)
      {
        printf("*");
      }
      printf("\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n+1-i; j++)
        {
            printf("*");
        }
       
        for (int k = 1;  k<=a; k++)
        {
            printf(" ");
             
        }
        for (int r = 1; r <= n+1-i; r++)
        {
            printf("*");
        }
        
        a = a+2;
        printf("\n");
    }
     return 0;
}