//Write a program to Print the transpose of the matrix entered by the user.


#include <stdio.h>
int main()
{
    int r, c;
    printf("Enter rows no : ");
    scanf("%d", &r);

    printf("Enter columns no : ");
    scanf("%d", &c);

    int arr1[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    for (int j = 0; j < c; j++)
    {
        for (int i = 0; i < r; i++)
        {   
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }


    return 0;
}