//Array of structures

#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct book{
        int year;
        float price;
        int pages;
        char name[30];
    }book;
    
    book arr[3];   //arr[0],arr[1],arr[2]
    arr[0].year=2024;
    arr[0].price=34.5;
    arr[0].pages=200;
    strcpy(arr[0].name,"Physics");

    arr[1].year=2023;
    arr[1].price=38.5;
    arr[1].pages=100;
    strcpy(arr[1].name,"Chemistry");

    arr[2].year=2022;
    arr[2].price=3.5;
    arr[2].pages=300;
    strcpy(arr[2].name,"Math");

    for (int i = 0; i <  3; i++)
    {
         printf("%d\n",arr[i].year);
         printf("%f\n",arr[i].price);
         printf("%d\n",arr[i].pages);
         printf("%s\n",arr[i].name);
         
    }
    
    
    return 0;
}