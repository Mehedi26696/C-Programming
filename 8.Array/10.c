#include <stdio.h>
int func1(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
       
        printf("The value of %d is %d\n", i, ptr[i]);
        printf("The value of %d is %d\n", i, *(ptr + i));
    }
    return 0;
}
int main()
{
    int arr[] = {3, 6, 7, 8};
    func1(arr);

    return 0;
}
 //printf("The value of %d is %d\n", i, ptr);