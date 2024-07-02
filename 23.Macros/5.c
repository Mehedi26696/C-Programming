//Need for parentheses

#include<stdio.h>
#define square(x) x*x
int main()
{
    int x=5;
    double y=4.5;
    int p=square(x+1);//p=x+1*x+1
    double z=square(y+1);//z=y+1*y=1
    printf("%d \n",p);
    printf("%lf \n",z);
    return 0;
}