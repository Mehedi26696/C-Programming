// Find the max elements of a given matrix of n x m.
// Index of max elements

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
    int max = arr1[0][0];
    int a, b;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr1[i][j] > max)
            {
                max = arr1[i][j];
                a = i;
                b = j;
            }
        }
    }
    printf("%d\n",max);
    printf("Index of max elements is : %d %d",a,b);  
    return 0;
}