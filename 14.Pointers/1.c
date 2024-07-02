#include <stdio.h>

int main()
{
    printf("Let's learn pointers\n");
    int a = 78;
    int *ptra = &a;
    int *ptr2=NULL;
    printf("1.The value of a is %d\n", a);
    printf("2.The value of a is %d\n", *ptra);
    printf("3.The value of a is %p\n", *ptra);
    printf("4.The address of a is %x\n", a);
    printf("5.The address of a is %x\n", &a);
    printf("6.The address of a is %p\n", &a);
    printf("7.The address of a is %p\n", &a);
    printf("8.The address of a is %x\n", ptra);
    printf("9.The address of pointer to a is %p\n", ptra);
    printf("10.The address of pointer to a is %p\n", &ptra);
    printf("11.The address of pointer  is %p\n", ptr2);
    



    return 0;
}