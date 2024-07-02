/*Print the given pattern
1
1 3
1 3 5
1 3 5 7*/

#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {   int b=1;
        for (int j = 1; j <=i; j++)
        {
            printf("%d ", b);
            b=b+2;
        }
        printf("\n");
    }

    return 0;
}