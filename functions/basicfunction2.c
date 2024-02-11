#include <stdio.h>
void australia()
{
    printf(" you are in australia\n");
}
void india()
{
    printf(" you are in india\n");
    australia();
}
int main()
{
    india();
}