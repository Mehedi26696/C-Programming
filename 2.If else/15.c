#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a==b && b==c && c==a)
    {
         printf("Equilateral Triangle");
    }
    else if (a==b||b==c||c==a)
    {
         printf("Isosceles triangle");
    }
    else if (a!=b && b!=c && c!=a)
    {
       printf("scalene triangle");
    }
    
    
    
    return 0;
}