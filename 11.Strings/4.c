//strlen
//strrev


#include<stdio.h>
#include<string.h>
int main()
{
    char str[45];
    //gets(str);
    scanf("%s",&str);
    printf("The length of the string is: %d\n", strlen(str));
    printf("The reverse of the string is: %s", strrev(str));
    return 0;
}