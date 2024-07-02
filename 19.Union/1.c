// Unions
// only one member can be used at a time
// Size of union is defined according to size of largest member data type.

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
typedef union book
{
    int year;
    int pages;
    float price;
    char cat;
    char name[30];
} book;

int main()
{

    book tech;
    tech.year = 2024;
    tech.pages = 200;
    tech.price = 125.5;

    tech.cat = 'A';
    strcpy(tech.name, "Chemistry");
    printf("%d\n", tech.year);
    printf("%d\n", tech.pages);
    printf("%f\n", tech.price);
    printf("%c\n", tech.cat);
    printf("%s\n", tech.name);

    printf("%d\n",sizeof(tech.year));
    printf("%d\n",sizeof(tech.pages));
    printf("%d\n",sizeof(tech.price));
    printf("%d\n",sizeof(tech.cat));
    printf("%d\n",sizeof(tech.name));

    printf("Total size : %d\n",sizeof(tech));

    return 0;
}