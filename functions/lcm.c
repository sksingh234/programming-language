#include <stdio.h>
int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
int gcd(int a, int b)
{
    int storage;
    for (int i = max(a, b); i <= a * b; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            storage = i;
            break;
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
    int lcm = gcd(a, b);
    printf("lcm of %d and %d is %d", a, b, lcm);
    return 0;
}