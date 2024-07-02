

#include<stdio.h>
void com(int n,int r,int cr_com[],int start,int index)
{
    if (index==r)
    {
         for (int i = 0; i <  r; i++)
         {
             printf("%d ",cr_com[i]);
         }
         printf("\n");
         return;
         
    }
    for(int i=start;i<=n;i++)
    {
         cr_com[index]=i;
         com(n,r,cr_com,i+1,index+1);
    }
    
    
}
int main()
{
    int n,r;
    scanf("%d %d",&n,&r);
    int cr_com[r];
    com(n,r,cr_com,1,0);
    return 0;
}