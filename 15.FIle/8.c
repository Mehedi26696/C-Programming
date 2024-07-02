
#include<stdio.h>
int main()
{   
    char s[1000];
    int v=0,c=0,d=0,sp=0;
    int i=0;
    FILE *ptr=fopen("input.txt","r");
    while(fgets(s,999,ptr)!=NULL)
    {
        
          
    }
    while (s[i]!='\0')
    {
          char ch=s[i];
          if (ch==' ')
          {
             
          }
          else if (ch=='.'||ch==':'||ch=='('||ch=='*'||ch=='!')
          {
             sp++;
          }
          else if (ch=='A'|| ch=='E' ||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
          {
             v++;
          }
          else if(ch=='0'||ch=='1'|| ch=='2' ||ch=='3'||ch=='4'||ch=='5'||ch=='6'||ch=='7'||ch=='8'||ch=='9')
          {
             d++;
          }
          else
          {
            c++;
          }
          i++;  
    }
    fclose(ptr);
    FILE *p=fopen("input.txt","a+");
    
    fprintf(p,"\n");
    fprintf(p,"Vowel: %d\n",v);
    fprintf(p,"Consonant: %d\n",c);
    fprintf(p,"Digit: %d\n",d);
    fprintf(p,"Special: %d\n",sp);
    return 0;
}