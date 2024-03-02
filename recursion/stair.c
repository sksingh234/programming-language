#include <stdio.h>
 int stair (int x){
    if(x == 1 || x == 2 || x == 0) return x;
    int totalways = stair (x-1) + stair (x-2);
    return totalways;
 }
int main()
{
    int n;
    printf("enter the no of stairs:");
    scanf("%d", &n);
    int ways = stair(n);
    printf("The no of ways to reach at top is %d",ways);
    return 0;
}