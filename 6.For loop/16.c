/*WAP to print sum of all the even digits of
a given number.*/

#include <stdio.h>
int main()
{
    int a, s = 0, c = 0, x;
    scanf("%d", &a);

    while (a > 0)
    {

        x = a % 10;
        a = a / 10;
        if (x % 2 == 0)
        {
            s = s + x;
        }
    }

    printf("%d", s);
    return 0;
}