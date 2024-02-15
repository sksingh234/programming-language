#include <stdio.h>
int main()
{
    int a;
    printf("enter the value of a:");
    scanf("%d", &a);
    int b;
    printf("enter the value of b:");
    scanf("%d", &b);
    int vacant = a;
    a = b;
    b = vacant;
    printf("the value of a after swapping is %d:\n",a);
    printf("the value of b after swapping is %d:",b);
    return 0;
}