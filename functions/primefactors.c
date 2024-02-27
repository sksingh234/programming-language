#include <stdio.h>
void factor(int x)
{
    for (int i = 1; i <= x; i++)
    {
        if (x % i == 0)
            printf("%d ", i);
    }
    return ;
}
int main()
{
    int a;
    printf("enter value of number : ");
    scanf("%d", &a);
    printf("prime factor of %d are : ",a);
    factor(a);
    return 0;
}