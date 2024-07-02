//another way of initializatiion


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
void change(book* x){
    x->year=2020;
    x->price=50.5;
    x->pages=245;
    x->cat='B';
    strcpy(x->name,"Physics");


}
int main()
{

    book tech={60,70,100,'A',"Chemistry"};
    // tech.year = 2024;
    // tech.price = 125.5;
    // tech.pages = 200;
    // tech.cat = 'A';
    // strcpy(tech.name, "Chemistry");
    printf("%d\n", tech.year);
    printf("%d\n", tech.pages);
    printf("%f\n", tech.price);
    printf("%c\n", tech.cat);
    printf("%s\n", tech.name);

    change(&tech);
    printf("After Change :\n");
    printf("%d\n", tech.year);
    printf("%d\n", tech.pages);
    printf("%f\n", tech.price);
    printf("%c\n", tech.cat);
    printf("%s\n", tech.name);


    return 0;
}