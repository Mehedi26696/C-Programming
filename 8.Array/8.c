#include<stdio.h>

int main()
{
    int marks[3][3]={{45,72,68},
                    {65,87,52},
                    {89,45,89}};
    for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < 3; j++)
      {
         printf("%d ",marks[i][j]);
      }
      printf("\n");
    }
    
    return 0;
}