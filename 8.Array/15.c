//Print the number of distinct elements in an array which is already sorted in ascending order


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
    int cnt=n;
    for (int i = 0; i <n-1; i++)
    {
         if(arr[i]==arr[i+1])
         {
            cnt--;
         }
    }
    printf("Number of distinct elements : %d",cnt);
    
    return 0;
}