//array copy by reference



#include<stdio.h>
int main()
{
    int a1[5]={1,3,4,5,6};
    int a2[5];
    int *p1;
    int *p2=&a2[0];
    int *ep=&a1[4];

    for ( p1 = &a1[0]; p1 <=ep; p1++)
    {
         *p2++=*p1;
    }

    for (int i = 0; i <5; i++)
    {
         printf("%d ",a2[i]);
    }
    
    

    return 0;
}