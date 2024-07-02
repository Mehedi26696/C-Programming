#include<stdio.h>

int main(){
    int a,x,i;
    printf("Enter the value of table \n");
    scanf("%d",&a);
    
    for (int i = 1; i < 11; i++)
    {
        x=a*i;
        printf("%d*%d=%d\n",a,i,x);
    }
    
    return 0;
}