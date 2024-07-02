#include<stdio.h>
int main()
{
    int  arr[]={1,4,6,78,96,89};
    printf("Value of position 1 of the array is %d\n",arr[1]);
    printf("The address of first element of the array is %d\n",&arr[0]);
    printf("The address of first element of the array is %d\n",arr);
    printf("The address of second element of the array is %d\n",&arr[1]);
    printf("The address of second element of the array is %d\n",arr+1);

    printf("The value at address of first element of the array is %d\n",*(&arr[0]));
    printf("The value at address of first element of the array is %d\n",arr[0]);
    printf("The value at address of first element of the array is %d\n",*(arr));
    printf("The value at address of second element of the array is %d\n",*(&arr[1]));
    printf("The value at address of second element of the array is %d\n",arr[1]);
    printf("The value at address of second element of the array is %d\n",*(arr+1));
    return 0;
}