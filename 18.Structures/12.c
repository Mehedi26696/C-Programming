// strucutre pointers

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
typedef struct book
{
    int year;
    int pages;
    float price;
    char cat;
    char name[30];
} book;
// void fun(book b){
//     printf("%d",b.year);
//     return;
// }
// void change(book x){
//     x.year=2020;
//     x.price=50.5;
//     x.pages=245;

// }
int main()
{

    book tech;
    book *x = &tech;
    printf("%p\n", x);
    tech.year = 2024;
    tech.price = 125.5;
    tech.pages = 200;
    tech.cat = 'A';
    strcpy(tech.name, "Chemistry");
    // book *a = &tech.year;
    // book *b = &tech.pages;
    // book *c = &tech.price;
    // book *d = &tech.cat;
    // book *e = &tech.name;
    printf("%p\n", &tech.year);
    printf("%p\n", &tech.pages);
    printf("%p\n", &tech.price);
    printf("%p\n", &tech.cat);
    printf("%p\n", &tech.name);

    return 0;
}