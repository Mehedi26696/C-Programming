#include<stdio.h>
int main()
{
    int i=8;
    int j=5;
    float x=0.005;
    double y=-0.01;
    char c='c';
    char d='D';
    double a;
    a=(i-3*j)%(c+2*d)/(x-y);
    printf("%lf",a);
    return 0;
}