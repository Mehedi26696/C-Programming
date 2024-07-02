/*Display this GP - 100,50,25,.. upto ‘n’
terms.*/

#include<stdio.h>
int main()
{
    float a=100,n;
    scanf("%f",&n);
    for (int i = 1;i<=n; i++)
    {
        printf("%.1f ",a);
        a=a*0.5;
    }
    
    return 0;
}