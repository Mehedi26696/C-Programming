// Find the sum of a given matrix of n x m.

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
    int sum = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum += arr1[i][j];
        }
    }
    printf("%d",sum);
    return 0;
}