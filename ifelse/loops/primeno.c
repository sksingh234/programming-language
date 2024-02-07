#include <stdio.h>
int main()
{
    int n;
    printf(" enter the value:");
    scanf("%d", &n);
    // if(n ==1)
    // printf( " 1 is neither prime nor composite.");
    // for (int i = 2; i < n; i++)
    //     if (n % i == 0)
    //     {
    //         printf("the input no is composite.");
    //         break;
    //     }
    //     else
    //     {
    //         printf("the input no is prime.");
    //         break;
    //     }
    int a = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            a = 1;
            break;
        }
    }
    if (n==1)
    {
      printf("the input no is neither prime nor composite.");   
    }
    
      else if (a == 0)
        printf("the input no is prime.");
    else
        printf("the input no is composite.");
    return 0;
}