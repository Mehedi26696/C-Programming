//Write down a recursive function that will
// compute xN recursively. Both x, N will be a
// parameter to your function.


#include<stdio.h>
int p(int x,int n)
{
    if (n==1)
    {
         return x;
    }
    else
    {
        return x*p(x,n-1);
    }
    
    
}
int main()
{
    int x,n;
    scanf("%d %d",&x,&n);
    int y;
    y=p(x,n);
    printf("%d",y);
    return 0;
}