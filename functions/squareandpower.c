#include <stdio.h>
#include <math.h>
int main()
{
    int no;
    printf("enter the no:");
    scanf("%d", &no);
    // int q = sqrt(no);
    int q = pow(no, no);
    printf("%d", q);
    return 0;
}