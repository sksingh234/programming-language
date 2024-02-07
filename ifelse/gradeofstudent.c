#include <stdio.h>
int main()
{
    int x;
    printf("enter the percentage:");
    scanf("%d", &x);
    // if (x > 80)
    //     printf("first grade");
    // else if(x>60) printf ("second grade");

    // else if(x>40)
    //     printf("third grade");

    //     else
    //        printf("fail");

    if (x > 80)
        printf("first grade");
    else if (x > 60)
        printf("second grade");
    else if (x > 40)
        printf("third grade");
    else
        printf("fail");
    return 0;
}