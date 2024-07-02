//write


#include<stdio.h>
int main()
{
    FILE *ptr=fopen("7.txt","w");
    char str[100];
    fgets(str,100,stdin);
    fputs(str,ptr);

    return 0;
}