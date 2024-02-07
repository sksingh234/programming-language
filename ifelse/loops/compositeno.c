#include <stdio.h>
int main()
{
    int n;
    printf(" enter the value:");
    scanf("%d", &n);

    for (int i = 2; i < n; i++)
        if (n % i == 0)
        {
            printf("the input no is composite.");
            break;
        }
         
         return 0;
}