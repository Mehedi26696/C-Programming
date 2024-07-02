/*Take positive integer input and tell if it
is divisible by 5 or 3 but not divisible by 15.*/

#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if (a%3==0 || a%5==0)       
    {
        if (a%15!=0)
        {
            printf("It is divisible by 5 or 3 but not divisible by 15");
        }
        else
        {
            printf("No");
        }
        
    }
    else
    {
        printf("No");
    }
    
    
    return 0;
}