//write in file



#include <stdio.h>
#include <stdlib.h>
int main()
{
     
    char s1[100];
    char s2[100];
    char s3[100];
    int i;
    scanf("%s",s1);
    scanf("%s",s2);
    scanf("%s",s3);
    scanf("%d",&i);
    
    FILE *ptr1;

    ptr1=fopen("3.txt","w");

    fprintf(ptr1, "%s %s %s %d",s1,s2,s3,i );

    fclose(ptr1);
    

    return 0;
}