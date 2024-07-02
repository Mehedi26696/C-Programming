//Macros with multiple lines: solution to the problem when used in if-else

#include<stdio.h>
#define swap(t,x,y)  do{ t = x; x = y; y = t;} while (0)
int main()
{
    int v, p = 10,q = 30;
    float a = 3.0,b = 10.3, c;
    if(p<q) swap(v, p, q);
     
    printf("%d %d\n",p,q);//if (p < q)  do {v = p; p = q; q = v;} while (0);
    

    return 0;
}
