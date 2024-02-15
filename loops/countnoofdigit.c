#include <stdio.h>
int main()
{
    int n;
    printf("enter the value of n:");
    scanf("%d", &n);

    int count = 0;
    for (int i = 1; n > 0; i++)
    {
        n = n / 10;
        count++;
    }
     printf( "the total digit present in our inputed no is %d",count);
    return 0;
}