/*Print the given pattern
A B C D
A B C D
A B C D
A B C D*/
#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    char b;
    scanf("%c",&b);

    for (int i =1; i <=a; i++)
    {
        for (char ch='A'; ch<='b';ch++)
        {
             printf("%c ",ch);
        }
        printf("\n");
        
    }
    
    return 0;
}