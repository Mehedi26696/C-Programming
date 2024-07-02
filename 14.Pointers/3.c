#include <stdio.h>
int main()
{
    char b = '3';
    char *ptrb = &b;
    printf("%d\n", ptrb);
    printf("%d\n", ptrb + 2);
    printf("%d\n", ptrb - 2);
    return 0;
}