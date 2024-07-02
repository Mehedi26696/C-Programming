// Bitwise XOR
// We can check an unique element of an array with help of Bitwise XOR

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int x=ar[0];
    for (int i = 1; i <  n; i++)
    {
         x=x^ar[i];
    }
    printf("%d",x);
    

    return 0;
}