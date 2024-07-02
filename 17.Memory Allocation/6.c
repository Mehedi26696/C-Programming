//Using malloc


#include <stdlib.h>
#include <stdio.h>
int main()
{
    int *p, N, i, sum = 0;
    scanf("%d", &N);
    p = malloc(N * sizeof(int));//give the address of first element
    for (i = 0; i < N; i++)
        scanf("%d", p + i);
    for (i = 0; i < N; i++)
        sum = sum + *(p + i);
    printf("%d", sum);
    free(p);
}
