// Print largest and second largest element of an array.Assume that the array has at least two elements.

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    int sec_max;
    for (int i = 1; i < n; i++)
    {
        if (max < arr[i])
        {
            sec_max = max;
            max = arr[i];
        }
        else if (sec_max < arr[i])
        {
            sec_max = arr[i];
        }
    }
    printf("Max : %d\n",max);
    printf("Second max : %d",sec_max);

    return 0;
}