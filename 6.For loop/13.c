/*WAP to check if a number is prime or
not.*/

#include<stdio.h>
int main()
{
    int a,b=0;
    scanf("%d",&a);
    if(a%1==0 && a%a==0)
      {
        b=1;
      }
    for (int i = 2; i < a; i++)
    {   

        if (a%i==0)
        {
            b=2;
        }
   
    }
    if (b==1)
    {
        printf("Prime\n");
    }
    else if (b==2)
    {
        printf("Not Prime\n");
    }
    
    
    return 0;
}