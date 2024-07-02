#include<stdio.h>

int main()
{
    int marks[2][4]={{45,72,68,40},
                    {65,87,52,63}};
    for (int i = 0; i < 2; i++)
    {
      for (int j = 0; j < 4; j++)
      {
         printf("%d ",marks[i][j]);
      }
      printf("\n");
    }
    
    return 0;
}