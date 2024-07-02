#include <stdio.h>
int main()
{
    printf("%lu\n", sizeof(int));
    printf("%d\n", sizeof(int));
    printf("%c\n", sizeof(int));
    printf("%x\n", sizeof(int));
    printf("%p\n", sizeof(int));
    printf("%lu\n", sizeof(double));
    printf("%d\n", sizeof(double));
    printf("%c\n", sizeof(double));
    printf("%x\n", sizeof(double));
    printf("%p\n", sizeof(double));
    return 0;
}