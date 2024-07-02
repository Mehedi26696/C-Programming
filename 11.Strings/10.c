// Write down a function that compares two strings and returns 1 if they are same and returns 0 otherwise

#include <stdio.h>
#include <string.h>

int com(char s1[], char s2[])
{
    if (strlen(s1) != strlen(s2))
    {
        return 0;
    }

    for (int i = 0; i < strlen(s1); i++)
    {
        if (s1[i] != s2[i])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char s1[100];
    char s2[100];
    fgets(s1, 99, stdin);
    fgets(s2, 99, stdin);
    int x = com(s1, s2);
    printf("%d",x);

    return 0;
}