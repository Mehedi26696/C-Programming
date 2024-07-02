// Find the min elements of a given matrix of n x m.
// index of min elementss
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
    int min = arr1[0][0];
    int a=0, b=0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr1[i][j] < min)
            {
                min = arr1[i][j];
                a = i;
                b = j;
            }
        }
    }
    printf("%d\n", min);
    printf("Index of min elements is : %d %d", a, b);
    return 0;
}