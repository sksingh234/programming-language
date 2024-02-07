#include <stdio.h>
int main()
{
    int x;
    printf("enter the no:");
    scanf("%d", &x);
    int y;
    printf("enter the no:");
    scanf("%d", &y);
    int z;
    printf("enter the no:");
    scanf("%d", &z);

    if (x+y>z && y+z >x && z+x >y)
    printf ("it is a triangle");
    else
     printf ("it is not a triangle");

     return 0;

    
    }
    