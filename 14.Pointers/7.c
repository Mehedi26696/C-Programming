#include <stdio.h>
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return;
}
int main()
{
    int a , b;
    scanf("%d %d",&a,&b);
    printf("%d and %d\n", a, b);
    swap(&a, &b);
    printf("%d and %d\n", a,b);
    return 0;
}