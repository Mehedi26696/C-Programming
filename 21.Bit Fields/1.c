// Size of

#include <stdio.h>
int main(void)
{
    int y;
    int x = 11;
    // value of x doesn't change
    y = sizeof(x++);
    // prints 4 and 11
    printf("%i %i", y, x);
    return (0);
}