//for inspecting bytes of int

#include <stdio.h>
union intChar
{
    int i;
    unsigned char c[4];
} n;

int main()
{
    scanf("%d", &n.i);
    printf("%d %d %d %d", n.c[0], n.c[1], n.c[2], n.c[3]);
}