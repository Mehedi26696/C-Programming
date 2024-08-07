//

//array of pointers example

#include<stdio.h>
#include <stdlib.h>
void main()
{
    int N;

    scanf("%d", &N);

    int *p[N], i, sum = 0;

    for (i = 0; i < N; i++)
        p[i] = malloc(sizeof(int)); // OR *(p+i) = malloc(sizeof(int));

    for (i = 0; i < N; i++)
        scanf("%d", p[i]); // OR scanf("%d", *(p+i));

    for (i = 0; i < N; i++)
        sum = sum + *p[i]; // OR sum = sum + *(*(p+i));

    printf("%d", sum);

    for (i = 0; i < N; i++)
        free(p[i]); // OR free(*(p+i));
}