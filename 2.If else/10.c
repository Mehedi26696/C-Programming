/*Take 3 positive integers input and print
the greatest of them.*/

#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a>b && a>c)
    {
        printf("Gratest is %d",a);
      
    }
    else if (b>a && b>c)
    {
        printf("Gratest is %d",b);
    }
    else
    {
        printf("Greatest is %d",c);
    }
    
    return 0;
}