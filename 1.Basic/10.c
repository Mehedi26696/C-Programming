/*Take float input and print the fractional part
of the real number*/

#include<stdio.h>
int main()
{
    float a,c;
    int b;
    scanf("%f",&a);
    b=a;
    c=a-b;
    printf("Fractional part %.2f",c);
    return 0;
}