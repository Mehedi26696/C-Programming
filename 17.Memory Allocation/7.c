//concat of string


#include<stdio.h>
#include <stdlib.h>
char *concat(char *s, char *t)
{
    char *p, *q;
    int n = 0;
    q = s;
    while (*q)
        q++, n++;
    q = t;
    while (*q)
        q++, n++;
    p = q = malloc(n + 1);
    while (*s)
        *p++ = *s++;
    while (*t)
        *p++ = *t++;
    *p = '\0';
    return q;
}

void main()
{
    char a[80], b[80];
    char *c;
    gets(a);
    gets(b);
    c = concat(a, b);
    puts(c);
    free(c);
}
