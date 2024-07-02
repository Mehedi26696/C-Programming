/*Print the given pattern
****
*** 
**
*       */

#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for (int i =1; i <=a; i++)
    {
        for (int j =a+1-i;j>0;j--)
        {
             printf("*");
        }
        printf("\n");
    }
    
    return 0;
}