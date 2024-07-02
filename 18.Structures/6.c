//typedef
//we can change data type name using typedef


#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct book{
        char name[50];
        float price;
        int pages;
    }x;
    
    x a;
    x b;
    x c;
    a.pages=100;
    a.price=411.5;
    strcpy(a.name,"Secret Seven");

    printf("%d\n",a.pages);
    printf("%f\n",a.price);
    printf("%s\n",a.name);
    
    return 0;
}