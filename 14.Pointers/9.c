#include<stdio.h>
void assign(int *x,int *y){
        *x=*x+*y;
        *y=*x-*y;

      return ;
}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d and %d\n", a,b);
    assign(&a,&b);
    printf("%d and %d",a,b);
    return 0;
}