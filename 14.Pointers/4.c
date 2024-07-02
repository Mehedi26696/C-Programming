#include<stdio.h>
int main()
{
    int a=26;
    int *ptra=&a;
    printf("%d\n",ptra);
    ptra++;
    printf("%d\n",ptra);
    printf("%d\n",ptra-1);
    ptra--;
    printf("%d\n",ptra);
    return 0;
}