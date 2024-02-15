#include <stdio.h>
int main()
{
    int n;
    printf("enter the value of n:");
    scanf("%d", &n);

    int sum = 0, rem = 0;
    for (int i = 1; n > 0; i++)
    {
        rem = n % 10;
        if (rem % 2 == 0)
            sum = sum + rem;
        else
            sum;
        n = n / 10;
    }
    // while (n != 0)
    // {
    //     rem = n % 10;
    //     sum = sum + rem;
    //     n = n / 10;
    // }

    printf("the sum of the  even digits of our inputed no is : %d", sum);
    return 0;
}