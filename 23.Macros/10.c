//Macros side effect: use with caution

#include<stdio.h>

#define max(a,b) ((a > b)? (a) : (b))
int main()
{
    int p=4;
    int q=5;
    int r=max(p,q);//r = ((p > q) ? (p) : (q));
    int x=max(p++,q++);//z = ((p++ > q++) ? (p++) : (q++));
    printf("%d\n",r);
     printf("%d\n",x);

    return 0;
}
