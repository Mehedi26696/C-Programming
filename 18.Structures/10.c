//nesting

#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct book{
        int year;
        float price;
        int pages;
        char name[30];
    } book;

    typedef struct itbook{
        book normal;
        char topic[30];
    } itbook;

    itbook test;
    strcpy(test.topic,"Tech");
    test.normal.year=2024;
    test.normal.pages=300;
    test.normal.price=125.5;
    strcpy(test.normal.name,"Knowledge");
   return 0;
}