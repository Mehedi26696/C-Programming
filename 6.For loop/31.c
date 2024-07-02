


/*Write a program that prints all prime numbers up to
x. The integer x will be input to your program.*/

#include <stdio.h>
int main()
{
    int a;

    scanf("%d", &a);
    for (int i = 2; i <= a; i++)
    {
        int c = 0;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                c = 1;

                break;
            }
        }

        if (c == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}