/*Print all the odd numbers from 1 to 100*/

#include<stdio.h>
int main()
{   int a;
    scanf("%d",&a);
    for (int i =1; i <=a; i=i+2)
    {
         printf("%d\n",i);
    }
    
    return 0;
}