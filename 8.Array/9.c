#include <stdio.h>
int func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value of %d is %d\n", i, array[i]);
    }
    array[0] = 267;
    return 0;
}

int main()
{
    int arr[] = {4, 6, 8, 9};
    printf("The value of index 0 is %d\n", arr[0]);
    func1(arr);
    printf("The value of index 0 is %d\n", arr[0]);
    return 0;
}