/*Write down a program that will take three integers
as input and will print the second largest of the
three.*/

#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a>=b && a>=c)
    {
        if (b>=c)
        {
            printf("%d",b);
        }
        else
        {
            printf("%d",c);
        }
        
        
    }
     if (b>=a && b>=c)
    {
        if (a>=c)
        {
            printf("%d",a);
        }
        else
        {
            printf("%d",c);
        }
        
        
    }
     if (c>=b && c>=a)
    {
        if (b>=a)
        {
            printf("%d",b);
        }
        else
        {
            printf("%d",a);
        }
        
        
    }
    
    
    return 0;
}