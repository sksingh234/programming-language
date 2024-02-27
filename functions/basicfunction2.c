#include <stdio.h>
void australia()
{
    printf(" you are in australia\n");
    return;
}
void india()
{
    printf(" you are in india\n");
    australia();
    return;
}
int main()
{
    india();
    return 0;
}