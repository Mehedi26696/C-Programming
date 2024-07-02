/*Print the given pattern
****
**** 
****
****   (Solid Square) */

#include<stdio.h>
int main()
{
    int a;
    /*a=row, b=collumn*/
    scanf("%d",&a);
    for (int i = 1; i <=a; i++)
    {
        for (int j =1; j <=a; j++)
        {
             printf("*");
        }
        printf("\n");
    }
    
    return 0;
}