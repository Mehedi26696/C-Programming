#include <stdio.h>
int main()
{
    int r;
    printf("Enter the number of rows\n");
    scanf("%d", &r);
   /* for (int i = 0; i < r; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }*/
    for (int i =0; i<r; i++)
    {
        for (int j =0; j<=r-i-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}