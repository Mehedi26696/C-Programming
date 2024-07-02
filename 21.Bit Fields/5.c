// Enum
//

#include <stdio.h>
enum Bool
{
    FALSE,
    TRUE
};
enum Month
{
    JAN = 1,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC
};
enum Day
{
    THT = 30,
    THO = 31,
    TWN = 28
};
int days(int m)
{
    if (m == FEB)
        return TWN;
    else if (m == APR || m == JUN || m == SEP || m == NOV)
        return THT;
    else
        return THO;
}
int odd(int n)
{
    if (n % 2 == 1)
        return TRUE;
    else
        return FALSE;
}

int main()
{
    enum Bool b;
    int m;
    b = odd(6);
    printf("%d ", b);
    scanf("%d", &m);
    printf("\n Number of Days in the Month: %d", days(m));
}