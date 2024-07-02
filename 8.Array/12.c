
#include <stdio.h>
int func1(int array[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value at %d,%d is %d\n",i,j,array[i][j]);
        }
        
    }
     array[1][0]=45;
}

int main()
{
    int arr[][2] ={{4, 6 },{7,9}};
    func1(arr);
    func1(arr);

    return 0;
}