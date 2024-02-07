#include<stdio.h>
int main()
{
    int L = 6, B =9;
    int A = L*B;
    int P = 2*( L+B);
    if ( A>P)
    printf ("area is greater");
    else
    printf ("perimeter is greater");
    return 0;
}