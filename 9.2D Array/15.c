// Write a program to Print the transpose of the matrix entered by the user.
// 2nd way

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
    for (int i = 0; i < r; i++)
    {
        for (int j = i + 1; j < c; j++)
        {
            int temp = arr1[i][j];
            arr1[i][j] = arr1[j][i];
            arr1[j][i] = temp;
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }

    return 0;
}