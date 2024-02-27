#include <stdio.h>
void fibonacci(int x)
{
    int dabba1 = 0;
    int dabba2 = 1;
    printf("the 1st fibonacci no is 1\n");
    for (int i = 2; i <= x; i++)
    {
        int sum = dabba1 + dabba2;
        printf("the %dth fibonacci no is %d\n", i, sum);
        dabba1 = dabba2;
        dabba2 = sum;
    }
    return;
}
int main()
{
    int a;
    printf("enter value of a : ");
    scanf("%d", &a);
    fibonacci(a);
    return 0;
}