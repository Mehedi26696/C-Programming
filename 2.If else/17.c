/*Given a 3-digit number as input by the user find and print its minimum digit. For example if the user input is 361 the output is 1.
 */

#include <stdio.h>
int main()
{
    int a, b, c, d, e, f;
    scanf("%d", a);
    b = a / 100;
    c = b * 100;
    d = a - c;
    e = d / 10;
    f = d - (e * 10);

 
    if (b < e && b < f)
    {
        printf("%d", b);
    }
    else if (e < b && e < f)
    {
        printf("%d", e);
    }
    else
    {
        printf("%d", f);
    }

    return 0;
}