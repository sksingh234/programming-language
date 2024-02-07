#include<stdio.h>
int main (){

    int n ;
    printf(" enter the no ");
    scanf(" %d", &n);

    if ( n>99 && n<1000)
    printf(" it is a three digit no");
    else
     printf(" it is a notthree digit no");
     return 0;
}