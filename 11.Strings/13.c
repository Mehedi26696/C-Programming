/*Write down a program that
searches for a word in a
sentence. Both word and
sentence will be input to
your program. Print first
position of the word found

in the sentence.*/

#include <stdio.h>
#include<string.h>
int main()
{
    char s[100];
    char w[100];
    fgets(s, 99, stdin);
    fgets(w, 99, stdin);
    int p = -1;
    int j;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == w[0])
        {
            for (j = 1; j < strlen(w); j++)
            {
                if (s[i + j] != w[j])
                {
                    break;
                }
            }
            if (j==strlen(w)-1)
            {
                p = i;
                break;
            }
        }
    }
    if(p==-1)
    {
        printf("Not Found");
    }
    else
    {
        printf("Found at : %d",p);
    }
    
    return 0;
}