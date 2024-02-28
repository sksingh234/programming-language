#include <stdio.h>
// second method to print no in increasing form.
void increasing(int x)
{
    if (x==0) return ;
    increasing(x-1);
    printf("%d\n", x); 
    return ;
}
int main()
{
    int n;
    printf("enter the value of n:");
    scanf("%d", &n);
    increasing(n);
    return 0;
}