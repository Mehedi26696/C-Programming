/*Take 3 numbers input and tell if they
can be the sides of a triangle.*/

#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a + b > c)
    {
        if (b + c > a)
        {
            if (c + a > b)
            {
                printf("Can be traingle");
            }
        }
    }

    else
    {
        printf("Can not be triangle");
    }

    return 0;
}