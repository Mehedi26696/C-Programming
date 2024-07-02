 


#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,n,d,c,N,result;
    int m,p;
    scanf("%d %d %d %d %d %d",&a,&b,&n,&d,&c,&N);
    m=pow(a,n);
    p=(b*m+d/c);
    result=p%N;
    printf("%d",result);


    return 0;
}