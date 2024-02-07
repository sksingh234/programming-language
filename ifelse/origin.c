#include <stdio.h>
int main()
{
    int x;
    printf("enter the value of x :");
    scanf("%d", &x);
    int y;
    printf("enter the value of y:");
    scanf("%d", &y);

    if (x = 0)
        printf("the point lies on y axis.");
    else if (y = 0)
        printf("the point lies on x axis.");

    else if (x = 0, y = 0)
        printf("the point lies on origin.");

    else
        printf("the point lies in between the axis.");

    return 0;
}