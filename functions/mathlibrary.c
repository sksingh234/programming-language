#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    printf("enter the value of a:");
    scanf("%d", &a);
    double root = sqrt(a);
    printf("squareroot of %d is %lf\n", a, root);
    int power = pow(a,a);
    printf("%d to the power %d is %d",a,a,power);
    return 0;
}