// Given a matrix ‘a’ of dimension n x m and 2 coordinates (l1, r1) and (l2, r2). Return the sum of the rectangle from (l1,r1) to (l2, r2).

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
    int l1, r1;
    printf("Enter First Cordinates : ");
    scanf("%d %d", &l1, &r1);
    int l2, r2;

    printf("Enter Second Cordinates : ");
    scanf("%d %d", &l2, &r2);
    int sum = 0;
    for (int i = l1; i <= l2; i++)
    {
        for (int j = r1; j <= r2; j++)
        {

            sum += arr1[i][j];
        }
    }
    printf("%d", sum);
    return 0;
}