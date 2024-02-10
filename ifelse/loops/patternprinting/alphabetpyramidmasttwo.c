#include <stdio.h>
int main()
{
    int n;
    printf("enter the value of lines:");
    scanf("%d", &n);
      int a = 1;
      for (int i = 1; i <=n*2+1; i++)
      {
        char ch = (char)i+64;
        printf("%c",ch);
      }
      printf("\n");
    for (int i = 1; i <= n; i++)
    {
        int no = 1;
        for (int j = 1; j <= n+1-i; j++)
        {
           char qq = (char)no+64;
            printf("%c",qq);
            no++;
        }
       for (int k = 1; k<=a; k++)
       {
         printf(" ");
         no++;
       }
        for (int r = 1; r <= n+1-i; r++)
        {
            char rr = (char)no+64;
            printf("%c",rr);
            no++;
        }
        a = a+2;
        printf("\n");
    }
     return 0;
}