/*Take 3 positive integers input and print
the greatest of them.*/

#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if (a>b && a>c && a>d)
    {
        printf("Gratest is %d",a);
      
    }
    else if (b>a && b>c && b>d)
    {
        printf("Gratest is %d",b);
    }
    else if (c>a && c>b && c>d)
    {
        printf("Gratest is %d",c);
    }
    
    else
    {
        printf("Greatest is %d",d);
    }
    
    return 0;
}