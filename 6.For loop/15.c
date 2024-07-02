/*WAP to print sum of digits of a given
number.*/

#include <stdio.h>
int main()
{
    int a, s = 0, x;
    scanf("%d", &a);

    while (a > 0)
    {
        x = a % 10;
        a = a / 10;

        s = s + x;
    }

    printf("%d", s);
    return 0;
}