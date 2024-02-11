#include<stdio.h>
int add(int x,int y){
    return x+y;
}
int main(){
    int a;
    printf("enter the value of a:");
    scanf("%d",&a);
    int b;
    printf("enter the value of b:");
    scanf("%d",&b);
    int sum = add(a,b);
    printf("%d",sum);
    return 0;
}