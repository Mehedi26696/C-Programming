/*Print all the even numbers from 1 to 100*/

#include<stdio.h>
int main()
{   int a;
    scanf("%d",&a);
    for (int i =2; i <=a; i=i+2)
    {
         printf("%d\n",i);
    }
    
    return 0;
}