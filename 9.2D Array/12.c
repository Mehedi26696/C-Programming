// Write a program to print the row number having the maximum sum in a given matrix and maxsumrow

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
    int maxsum = 0;
    int row;
    for (int i = 0; i < r; i++)
    {
        int sum = 0;
        for (int j = 0; j < c; j++)
        {
            sum += arr1[i][j];
        }
        if (maxsum < sum)
        {
            maxsum = sum;
            row = i;
        }
    }
    printf("Row number : %d\n", row);
    printf("Max row sum : %d", maxsum);
    return 0;
}