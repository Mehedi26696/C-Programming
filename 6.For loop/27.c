/*squre series 1^2-2^2+3^2-.....*/

#include <stdio.h>
int main()
{
    int n, s = 0, b = 0, c;
    scanf("%d", &n);

    for (int i = 1; i <= n; i = i + 2)
    {
        s = s + i * i;
    }

    for (int j = 2; j <= n; j = j + 2)
    {
        b = b + j * j;
    }

    c = s - b;
    printf("%d", c);

    return 0;
}