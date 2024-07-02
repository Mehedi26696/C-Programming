/*Print the given pattern
1
1 2
1 2 3
1 2 3 4  */

#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for (int i =1; i <=a; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    
    return 0;
}