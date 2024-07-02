//infinite loop

#include<stdio.h>
#define infinite for(; ;)
int main()
{   int n;
    infinite {
        printf("enter a positive number");
        scanf("%d",&n);
        if (n>=0)
        {
             break;
        }
        
    }
    return 0;
}