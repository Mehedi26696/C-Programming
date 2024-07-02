/*Write a program that prints all prime factors of a
number n given as input.*/


#include<stdio.h>
int main()
{
    int n,a=0;
    scanf("%d",&n);
    for (int i =2; i <n; i++)
    {
         if (n%i==0)
         {
            for (int j = 2; j <i; j++)
            {
                 if (i%j==0)
                 {
                    a=1;
                 }
                 
            }
            if (a==0)
            {
                printf("%d ",i);
            }
            
         }
         
    }
    
    return 0;
}