/*lcm*/


#include<stdio.h>
int main()
{
    int a,b,x,gcd,lcm;
    scanf("%d %d",&a,&b);
    if (a<b)
    {
        x=a;
        a=b;
        b=x;
    }
    for (int i =1; i <=b; i++)
    {
         if (a%i==0 && b%i==0)
         {
            gcd=i;
         }
         
    }
    lcm=(a*b)/gcd;
    printf("%d",lcm);
    return 0;
}