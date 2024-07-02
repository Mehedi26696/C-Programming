/*Given the length and breadth of a rectangle,
write a program to find whether the area of the
rectangle is greater than its perimeter*/


#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d", &a,&b);
    c=a*b;
    d=2*(a+b);
    if (c>d)
    {
        printf("Area is greater than perimeter");
    }
    else
    {
        printf("Area is not greater than perimeter");
    }
    
    return 0;
}