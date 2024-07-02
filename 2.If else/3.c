/*Take positive integer input and tell if it is even or odd*/

#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
    
    
    return 0;
}