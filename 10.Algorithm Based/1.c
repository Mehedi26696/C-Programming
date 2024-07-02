//linear search in an unsorted array


#include<stdio.h>
int linearsearch(int arr[],int size,int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==element) 
        {
            return i;
        }
        
    }
    return -1;
}
int main()
{    int arr[]={1,8,564,68,6989,65,689,656,45,989,65,989,56,89,65,989,9895,665,5};
     int size=sizeof(arr)/sizeof(int);
     int element=45;
     int searchindex=linearsearch(arr,size,element);
     printf("The element %d was found at index %d\n",element,searchindex);
     printf("size %d",size);
    
    return 0;
}