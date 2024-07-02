


/*WAP to sum of digits of a given number.*/

#include <stdio.h>
int main()
{
    int a, b = 0, r, p;
    scanf("%d", &a);
    while (a > 0)
    {
        p = a;
        a = a / 10;
        r = p - a * 10;

        b = b + r;
    }

    printf("%d", b);
    return 0;
}