//Write down a program that prints how many times a letter appeared in a sentence. Both letter and sentence will be input to your program.

#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    fgets(s,99,stdin);
    char ch;
    scanf("%c",&ch);
    int x=0;
    for (int i = 0; i <  strlen(s); i++)
    {
         if (s[i]==ch)
         {
              x++;
         }
         
    }
    printf("%d",x);
    
    return 0;
}