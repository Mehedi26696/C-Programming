//read


#include<stdio.h>
int main()
{
    FILE *ptr=fopen("6.txt","r");
    char str[100];

    while(fgets(str,100,ptr)!=NULL)
    {
        printf("%s",str);
    }
    return 0;
}