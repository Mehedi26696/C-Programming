//string copy without strcpy function




#include<stdio.h>
int main()
{
    char s1[10]="hasan";
    char s2[10]="mehedi";
    char *dp=&s1[0];
    char *sp=&s2[0];
    while (*sp)
    {
         *dp++=*sp++;
    }
    printf("%s",s1);
    
    return 0;
}