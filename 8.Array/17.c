//Left rotate all the elements in an array


#include<stdio.h>
int main()
{
     int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int t=arr[0];
    for (int i = 0; i < n-1; i++)
    {
          arr[i]=arr[i+1];
    }
    arr[n-1]=t;
    for (int i = 0; i < n; i++)
    {
         printf("%d ",arr[i]);
    }
    

    return 0;
}