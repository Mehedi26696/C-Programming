//pointer access in structures


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
    
    (*x).year=2024;

    printf("%d",tech.year);

    return 0;
}


