#include <stdio.h>
void decreasing(int x)
{
    if (x == 0)
        return;
    printf("%d\n", x);
    decreasing(x - 1);
    return;
}
void increasing(int x)
{
    if (x == 0)
        return;
    increasing(x - 1);
    printf("%d\n", x);
    return;
}
int main()
{
    int a;
    printf("enter the value of no to be printed:");
    scanf("%d", &a);
    increasing(a);
    decreasing(a);
    return 0;
}