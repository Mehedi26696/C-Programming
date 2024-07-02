#include<stdio.h>  
 int main()
 {
  int a,i,f=1;
  printf("Enter the value of a\n");
  scanf("%d",&a);
  for (int i = 1; i <=a; i++)
  {
    f=f*i;
  }
  printf("Factorial of %d is : %d",a,f);
   return 0;
 }