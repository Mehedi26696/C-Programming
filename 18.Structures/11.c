//passing structure in function
//pass by value because it's create copy of main structures


#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct book{
        int year;
        float price;
        int pages;
        char name[30];
    } book;
void fun(book b){
    printf("%d",b.year);
    return;
}
void change(book x){
    x.year=2020;
    x.price=50.5;
    x.pages=245;

}
int main()
{
    
    book tech;
    tech.year=2024;
    tech.price=125.5;
    tech.pages=200;
    //fun(tech);
    change(tech);
    printf("%d\n",tech.year);
    printf("%f\n",tech.price);
    printf("%d\n",tech.pages);
    
   return 0;
}