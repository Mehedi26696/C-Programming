#include <stdio.h>
int main()
{
    int arr[] = {64, 25, 12, 22, 11, 56, 34, 89};
    int i,j,flag;
    for (  i = 0; i <8-1; i++)
    {
         flag=0;
         for (  j = 0; j <8-i-1; j++)
         {
             if (arr[j]>arr[j+1])
             {
                 int t=arr[j];
                 arr[j]=arr[j+1];
                 arr[j+1]=t;
                 flag=1;
             }
             
         }
         if(flag==0)
         {
            break;
         }
         
    }
    
    for (int k = 0; k < 8; k++)
    {
        printf("%d ", arr[k]);
    }

    return 0;
}