// A record contains name of cricketer, his age, number
// of test matches that he has played and the average runs that
// he has scored in each test match. Create an array of structure
// to hold records of 5 such cricketer and then write a program to
// read these records

#include<stdio.h>
int main()
{
    typedef struct records{
        char name[30];
        int age;
        int test;
        float avg;
    }records;

    records arr[3];
    for (int i = 0; i <3; i++)
    {    
        scanf("%[^\n]s",arr[i].name);
        scanf("%d",&arr[i].age);
        scanf("%d",&arr[i].test);
        scanf("%f",&arr[i].avg);
    }

    for (int i = 0; i <  3; i++)
    {
         printf("%s\n",arr[i].name);
         printf("%d\n",arr[i].age);
         printf("%d\n",arr[i].test);
         printf("%f\n",arr[i].avg);
         
    }
    
    return 0;
}
