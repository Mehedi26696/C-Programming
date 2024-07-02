//strcpy


#include<stdio.h>
#include<string.h>
int main()
{
    char s1[30]="Mehedi";
    char s2[30]="Hasan";
    char s3[79];

    //gets(s1);
    //gets(s1);
    strcpy(s3,strcat(s1,s2));
    puts(s3);
    return 0;
}