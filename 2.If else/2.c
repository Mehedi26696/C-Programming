#include <stdio.h>
int main()
{
    int AB, BC, CA, X;
    printf("Enter The Value of AB,BC,CA\n");
    scanf("%d %d %d", &AB, &BC, &CA);
    if (1 <= AB, BC, CA <= 100)
    {
        X = 0.5 * AB * BC;
        printf("%d", X);
    }
    else
    {
        printf("You exceed input limit");
    }

    return 0;
}
