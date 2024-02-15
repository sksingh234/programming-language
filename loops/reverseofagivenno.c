#include <stdio.h>
int main()
{
    int n;
    printf("enter the value of n:");
    scanf("%d", &n);

    int reverse = 0, rem = 0;
    for (int i = 1; n > 0; i++)
    {
        rem = n % 10;
        reverse =(reverse*10) + rem;
        n = n / 10;
    }

    printf("the reverse of inputed no is : %d", reverse);
    return 0;
}