// Write down a recursive function that will
// compute factorial of N recursively. N will be
// a parameter to your function.


#include<stdio.h>
int fact(int n)
{
    int f=n;
    if (n==1 || n==0)
    {
         return 1;
    }
    else
    {   
        
        return f*(fact(n-1));
    }
    
    
}
int main()
{
    int n;
    scanf("%d",&n);
    int x;
    x=fact(n);
    printf("%d",x);
    return 0;
}