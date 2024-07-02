/*Take integer input and print the
absolute value of that integer*/

#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if (a<0)
    {
        a=-a;
        printf("%d",a);
    }
    else
    {
        printf("%d",a);
    }
    
    return 0;
}