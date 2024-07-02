/*WAP to print the sum of given number
and its reverse.*/

#include<stdio.h>
int main()
{
    int a,b=0,c,d;
    scanf("%d",&a);
    d=a;
    while (a>0)
    {
         c=a%10;
         b=c+10*b;
         a=a/10;
    }
    printf("%d",b+d);
    return 0;
}