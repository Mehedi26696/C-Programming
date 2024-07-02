/*Take positive integer input and tell if it
is divisible by 5 and 3.*/


#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if (a%3==0 && a%5==0)
    {
        printf("Yes divisible");
    }
    else
    {
        printf("Not divisible");
    }
    
    return 0;
}