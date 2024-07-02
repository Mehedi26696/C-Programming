//string add
//strcat



#include<stdio.h>
#include<string.h>
int main()
{
    char s1[30];
    char s2[30];
    char s3[400];
    gets(s1);
    gets(s2);
    gets(s3);
    strcat(s1,s2);
    //puts(strcat(s1,s3));
    printf("%s",strcat(s1,s3));
    return 0;
}
// print "Mehedi is a CSE student" using input 3 strings
