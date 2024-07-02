// Macros with argument
#include <stdio.h>
#define increment(x) x++
int main()
{

    int k = 1;
    int n;
    scanf("%d", &n);
    while (k <= n)
    {
        printf("%d ", k);
        increment(k);//k++
    }
    increment(n);//n++
    printf("\n%d",n);
    return 0;
}
