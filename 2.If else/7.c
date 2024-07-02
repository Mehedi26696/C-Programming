/*Take positive integer input and tell if it
is a three digit number or not.*/

#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if (a>99 && a<1000)
    {
        printf("Yes,it is three digit number");
    }
    else
    {
        printf("No,it is not three digit number");
    }
    
    return 0;
}