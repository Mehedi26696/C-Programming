// Write down a recursive function that will
// recursively compute summation of all natural
// numbers up to N. N will be a parameter to
// your function.

#include<stdio.h>
int sum(int n)
{
    int s=n;
    if (n==1)
    {
         return 1;
    }
    else
    {    
         return s+sum(n-1);
    }
    
}
int main()
{
    int N;
    scanf("%d",&N);
    int x;
    x=sum(N);
    printf("%d",x);
    return 0;
}