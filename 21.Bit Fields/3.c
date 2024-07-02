// bit field
// It used for reduce memory size
// struct { type [member_name] : width ; };

#include <stdio.h>

struct info1
{
    int num;
} f1;
struct info2
{
    int num : 1;
} f2;
void main()
{
    printf("\n\n\tSize of info1 is : %d", sizeof(f1));
    printf("\n\n\tSize of info2 is : %d", sizeof(f2));
}