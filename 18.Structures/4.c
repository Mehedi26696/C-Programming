//Create a structure type ‘book’ with name, price and number of pages as its attributes
//string can't copy that's why we have to use strcpy()

#include<stdio.h>
#include<string.h>
int main()
{
    struct book{
        char name[50];
        float price;
        int pages;
    }a,b,c;

    a.pages=100;
    a.price=411.5;
    strcpy(a.name,"Secret Seven");
    printf("%d\n",a.pages);
    printf("%f\n",a.price);
    printf("%s\n",a.name);

    return 0;
}