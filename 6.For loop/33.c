


/*Write a program that prints all perfect numbers up to
x. The integer x will be input to your program.*/

#include <stdio.h>
int main()
{
    int a;
    
    scanf("%d", &a);
    for (int i = 2; i <= a; i++)
    {
         int b=0;
        for (int j = 1; j < i; j++)
        {  
            if (i % j == 0)
            {
                b = b + j;
            }
        }
        if (b == i)
        {
            printf("%d ", i);
        }
    }

    return 0;
}