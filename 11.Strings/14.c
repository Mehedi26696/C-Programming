/*Write down a program that
prints how many words,
letters, vowels and
consonants exist in a

sentence. The sentence will
be input to your program.
*/

#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    fgets(s, 99, stdin);
    int w = 0, l = 0, v = 0, c = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == ' ')
        {
            w++;
        }
        else //if ((s[i] > +'A' && s[i] <= 'Z') || (s[i] > +'a' && s[i] <= 'z'))
        {
            l++;
            if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                v++;
            }
            else
            {
                c++;
            }
        }
    }
    printf("Words : %d\n", ++w);
    printf("Letters : %d\n", l);
    printf("Vowels : %d\n", v);
    printf("Consonnts : %d\n", c);

    return 0;
}