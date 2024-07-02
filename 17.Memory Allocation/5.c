//Memory allocation malloc



#include<stdio.h>
#include <stdlib.h>
int main()
{
    int *p, *q;

    p = malloc(sizeof(int));
    q = malloc(sizeof(int));
    scanf("%d%d", p, q);
    printf("%d %d %d %d", *p + *q, *p - *q, *p * *q, *p / (*q));
    free(p);
    free(q);
}