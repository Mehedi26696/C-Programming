//Write down a program that will print n-th letter in a sentence entered by a user. n will be input to your program


#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    fgets(str,99,stdin);
    int l=strlen(str);
    int n;
    scanf("%d",&n);
    printf("%c",str[n]);
    
    return 0;
}