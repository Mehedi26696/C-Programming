/*Write a program to print out all Armstrong
numbers between 1 and 500. If sum of cubes of
each digit of the number is equal to the number
itself, then the number is called an Armstrong
number. For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) +
( 3 * 3 * 3 )*/

#include <stdio.h>
int main()
{
    int a, b, c, d, e, f;
    for (int i = 1; i <= 500; i++)
    {
        a = i / 100;
        b = i % 100;
        c = b / 10;
        d = b % 10;
        e = (a * a * a) + (c * c * c) + (d * d * d);
        f = (a*100)+(c*10)+d;
        if (e == f)
        {
            printf("%d%d%d\n", a, c, d);
        }
    }

    return 0;
}