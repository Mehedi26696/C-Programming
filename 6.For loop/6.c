/*Print the table of any number*/

#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    for (int i = 0; i <=10; i++)
    {    
        b=a*i;
        printf("%d*%d=%d\n",a,i,b);
    }
    
    return 0;
}