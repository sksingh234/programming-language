#include <stdio.h>
int main()
{
    int n;
    printf(" enter the vertex:");
    scanf("%d", &n);
    int m;
    printf(" enter the base:");
    scanf("%d", &m);
    int power = 1;
    for (int i = 1; i <=n; i++)
    {
        power= power*m;
    }
    printf("%d to the power %d is %d:",m,n,power);
    return 0;
}
