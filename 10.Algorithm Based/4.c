#include <stdio.h>
int main()
{
    int arr[] = {64, 25, 12, 22, 11, 56, 34, 89};
    for (int i = 1; i <  8; i++)
    {
         int temp=arr[i];
         int j;
         for (  j = i-1; j>=0; j--)
         {
             if(arr[j]>temp)
             {
                arr[j+1]=arr[j];
             }
             else
             {
                 break;
             }
             
         }
         arr[j+1]=temp;
         
    }
    
    
    for (int k = 0; k < 8; k++)
    {
        printf("%d ", arr[k]);
    }

    return 0;
}