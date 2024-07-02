//Macros with multiple lines

#include<stdio.h>
#define swap(t,x,y) t = x; x = y; y = t;
int main()
{
    int v, p = 10,q = 30;
    float a = 3.0,b = 10.3, c;
    swap(v, p, q);
    swap(c, a, b);

    printf("%d %d\n",p,q);
    printf("%f %f",a,b);

    return 0;
}


 