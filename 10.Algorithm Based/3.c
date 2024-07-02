#include <stdio.h>
int main()
{
    int arr[] = {64, 25, 12, 22, 11, 56, 34, 89};
    int i, j, min;
    for (i = 0; i < 8; i++)
    {
        min = i;
        for (j = i + 1; j < 8; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            int t = arr[i];
            arr[i] = arr[min];
            arr[min] = t;
        }
    }
    for (int k = 0; k < 8; k++)
    {
        printf("%d ", arr[k]);
    }

    return 0;
}