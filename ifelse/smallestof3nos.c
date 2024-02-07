#include <stdio.h>
int main()
{
    int x;
    printf("enter the no:");
    scanf("%d", &x);
    int y;
    printf("enter the no:");
    scanf("%d", &y);
    int z;
    printf("enter the no:");
    scanf("%d", &z);

    if (x < y)
        if (x < z)
            printf("the smallest no is :%d", x);
        else // z<x
            printf("the  smallest no is :%d", z);
    else // y<x
        if (y < z)
            printf("the  smallest no is :%d", y);
        else // z<y
            printf("the smallest no is :%d", z);

    return 0;
}