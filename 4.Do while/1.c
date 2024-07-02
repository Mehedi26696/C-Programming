#include <stdio.h>
int main(){
 
    int a;
    int i=1,X;
    printf("Enter the number\n");
    scanf("%d",&a);
    do
    {
        X=a*i;
       printf("%d*%d=%d\n",a,i,X);
       i=i+1;
    } while (i<11);
    
    return 0;
}