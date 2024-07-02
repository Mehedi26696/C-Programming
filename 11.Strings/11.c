//Write down a program that searches for a letter in a sentence. Both letter and sentence will be input to your program. Print last position of the letter found in the sentence.


#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    fgets(s,99,stdin);
    char ch;
    scanf("%c",&ch);
    int x;
    for (int i = 0; i <  strlen(s); i++)
    {
         if (s[i]==ch)
         {
             x=i;
         }
         
    }
    printf("%d",x);
    
    return 0;
}