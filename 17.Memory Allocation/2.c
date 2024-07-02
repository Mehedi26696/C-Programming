//String compare without strcmp


#include<stdio.h>
int f1(char *p1, char *p2)
{
     while (1)
    {
        if (*p1 !=*p2)
        {
             return *p1-*p2;
        }

        if (*p1=='\0' || *p2=='\0')
        {
             return 0;
        }
        p1++;
        p2++;
        
         
    }
}
int main()
{
    char s1[10]="hasan";
    char s2[10]="hasan";
     
    int x=f1(&s1[0],&s2[0]);

    if(x==0)
    {
        printf("s1 and s2 is same");
    }

   else if (x<0)
    {
         printf("s1 is bigger");
    }

    else
    {
        printf("s2 is bigger");
    }
    
    
    return 0;
}