//Bitwise and
//If one input is 1 then we able to determine input number is odd or even

#include<stdio.h>
int main()
{   
    int a;
    scanf("%d",&a);
    if(a&1)
    {
        printf("Odd");
    }
    else
    {
         printf("Even");
    }
    
    return 0;
}