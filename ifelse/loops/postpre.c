#include <stdio.h>
int main()
{
    int x = 3, y, z;
    y = --x;
    z = x--;
    printf("%d\n", y);
    printf("%d", z);

    return 0;
}