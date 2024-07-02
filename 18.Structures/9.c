//structures copy

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

    book a,b,c;
    a.year=2024;
    a.price=70.5;
    a.pages=100;
    strcpy(a.name,"Noise");

    b=a; //structures copy

    printf("%d\n",b.year);
    printf("%f\n",b.price);
    printf("%d\n",b.pages);
    printf("%s\n",b.name);
    return 0;
}