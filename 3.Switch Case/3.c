#include <stdio.h>
#include <math.h>
int main()
{
    char ch;
    scanf("%c", &ch);

    // switch(ch){

    if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
    {
        switch (ch)
        {
        case 'A':
            printf("Vowel");
            break;
        case 'E':
            printf("Vowel");
            break;
        case 'I':
            printf("Vowel");
            break;
        case 'O':
            printf("Vowel");
            break;
        case 'U':
            printf("Vowel");
            break;

        default:
            printf("Consonant");
        }

        // default: printf("Not in alphabet");
    }
    else
    {
        printf("Not in alphabet");
    }
}