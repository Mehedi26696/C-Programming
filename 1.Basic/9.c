/*Take two integers input, a and b : a>b, and find the
remainder when a is divided by b.*/





#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter a and b\n");
    scanf("%d %d",&a,&b);
    c=a/b;
    d=a-(b*c);
    printf("Remainder %d",d);
    return 0;
}