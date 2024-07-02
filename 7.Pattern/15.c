//Digit print by stars




#include <stdio.h>
int main()
{
    int a;
    int rows = 5;
    int columns = 5;
    scanf("%d", &a);
    if (a == 0)
    {
        for (int i = 1; i <= rows; i++)
        {
            for (int j = 1; j <= columns; j++)
            {
                if (i == 1 || i == 5 || j == 1 || j == 5)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    if (a == 1)
    {
        for (int i = 1; i <= rows; i++)
        {
            for (int j = 1; j <= columns; j++)
            {
                if (j == 1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    if (a == 2)
    {
        for (int i = 1; i <= rows; i++)
        {
            for (int j = 1; j <= columns; j++)
            {
                if (i % 2 == 1 || (j == 1 && i != 2) || (j == 5 && i != 4))
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    if (a == 3)
    {
        for (int i = 1; i <= rows; i++)
        {
            for (int j = 1; j <= columns; j++)
            {
                if (i % 2 == 1 || (i % 2 == 0 && j == 5))
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    if (a == 4)
    {
        for (int i = 1; i <= rows; i++)
        {
            for (int j = 1; j <= columns; j++)
            {
                if (i == 3 || ((i == 1 || i == 2) && (j == 1 || j == 5)) || (j == 5))
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    if (a == 5)
    {
        for (int i = 1; i <= rows; i++)
        {
            for (int j = 1; j <= columns; j++)
            {
                if (i % 2 == 1 || (i == 2 && j == 1) || (i == 4 && j == 5))
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    if (a == 6)
    {
        for (int i = 1; i <= rows; i++)
        {
            for (int j = 1; j <= columns; j++)
            {
                if (i % 2 == 1 || (i == 2 && j == 1) || (i == 4 && (j == 1 || j == 5)))
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    if (a == 7)
    {
        for (int i = 1; i <= rows; i++)
        {
            for (int j = 1; j <= columns; j++)
            {
                if (i == 1 || (j == 5))
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    if (a == 8)
    {
        for (int i = 1; i <= rows; i++)
        {
            for (int j = 1; j <= columns; j++)
            {
                if (i % 2 == 1 || (i % 2 == 0 && (j == 1 || j == 5)))
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    if (a==9)
    {
        for (int i = 1; i <= rows; i++)
        {
            for (int j = 1; j <= columns; j++)
            {
                if (i%2==1 || (i==2 &&(j==1|| j==5))|| j==5)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
                
                
            }
            printf("\n");
        }
    }

    return 0;
}