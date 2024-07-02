/*Show largest factor of a number n (other than itself)*/

#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for (int i =a-1; i>0; i--)
    {
         if (a%i==0)
         {
            printf("%d",i);
            goto end;
         }
         
    }
    end:
    return 0;
}