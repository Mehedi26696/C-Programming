// String input
//scanf with %[^ListofNonAllowableChars]


#include <stdio.h>
int main()
{
    char line[100];
    scanf("%[^\n]",line);
    printf("%s",line);/* read until newline char */
    return 0;
}