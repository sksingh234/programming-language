#include <stdio.h>
int main()
{

    int n;
    printf("enter the no:");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        printf(" %d", i);
        printf(" \n");
    }
    return 0;
}