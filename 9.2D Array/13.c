//Given a matrix having 0-1 only, find the row with the maximum number of 1’s.
 

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
    int maxcount=0;
    int row;
    for (int i = 0; i <  r; i++)
    {
        int count=0;
         for (int j = 0; j <  c; j++)
         {
              if (arr1[i][j]==1)
              {
                 count++;
              }
              
         }
         if (maxcount<count)
         {
             maxcount=count;
             row=i;
         }
         
    }
    printf("Row number : %d",row);
    return 0;
}