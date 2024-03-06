#include <stdio.h>
int maze(int r, int c)
{
    int rightways = 0;
    int downways = 0;
    if (r == 1 && c == 1)
        return 1;
    if (r == 1)
    {
        rightways += maze(r, c-1);
    }
    if (c == 1)
    {
        downways += maze(r-1, c);
    }
    if (r > 1 && c > 1)
    {
        rightways += maze(r, c-1);
        downways += maze(r-1, c);
    }
    int totalways = rightways + downways;
    return totalways;
}
int main()
{
    int a;
    printf("enter no of rows:");
    scanf("%d", &a);
    int b;
    printf("enter no of columns:");
    scanf("%d", &b);
    int noofways = maze(a, b);
    printf("%d", noofways);
    return 0;
}