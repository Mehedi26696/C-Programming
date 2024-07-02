/*Print the sum of this series :
1 - 2 + 3 - 4 + 5 - 6… upto ‘n’.*/

#include<stdio.h>
int main()
{
    int a,b=0,c=0;
    scanf("%d",&a);
    for (int i =1; i <=a; i=i+2)
    {   
        b=b+i;
        
    }
    for (int i = 0; i <=a; i=i+2)
    {
         c=c+i;
    }
    printf("%d",b-c);
    return 0;
}