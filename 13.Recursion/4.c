//(nck)=((n-1)ck)+((n-1)c(k-1))
//(nc1)=n
//(ncn)=1
//zcombinations
#include<stdio.h>
int com(int n,int k)
{
    if (k==1)
    {
         return n;
    }
    else if (n==k)
    {
         return 1;
    }
    else
    {
         return (com(n-1,k)+com(n-1,k-1));
    }
    
    
    
}
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);

    int x=com(n,k);
    printf("%d",x);
    return 0;
}