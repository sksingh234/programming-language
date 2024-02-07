#include <stdio.h>
int main()
{
    int n;
    printf("enter the no:");
    scanf("%d", &n);

    if (n % 5 == 0)
        if (n % 3 == 0)
            printf("the no is divisible by 5 and 3 both ");
        else
            printf("the no is not divisible by 3 ");
    else
        printf("the no is not divisible by 5 ");
    return 0;
}