#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s;
    float Area;
    printf("Enter three numbers:\n");
    scanf("%f %f %f",&a,&b,&c);
    if (a+b>c)
    {
        s=(a+b+c)/2;
        Area=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("Area is %f\n",Area);
    }
    else
    {
        printf("Area can't be calculated");
    }
    
    return 0;
}