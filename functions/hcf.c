#include <stdio.h>
int min(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}
int gcd(int a, int b)
{
    int storage;
    for (int i = 1; i <= min(a, b); i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            storage = i;
        }
    }
    return storage;
}
int main()
{
    int a;
    printf("enter 1st no:");
    scanf("%d", &a);
    int b;
    printf("enter 2nd no:");
    scanf("%d", &b);
    int hcf = gcd(a, b);
    printf(" hcf of %d and %d is %d", a, b, hcf);
    return 0;
}