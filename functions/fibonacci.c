#include <stdio.h>
void fibonacci(int x)
{
    int dabba1 = 0;
    int dabba2 = 1;
    printf("1 ");
    for (int i = 1; i < x; i++)
    {
        int sum = dabba1 + dabba2;
        printf("%d ", sum);
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