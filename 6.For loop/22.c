/*Two numbers are entered through the
keyboard. Write a program to find the value of one
number raised to the power of another.*/

#include <stdio.h>
int main()
{
    int a, b, x = 1;
    scanf("%d %d", &a, &b);
    for (int i = 1; i <= b; i++)
    {
        x = x* a;
    }
    printf("%d", x);
    return 0;
}