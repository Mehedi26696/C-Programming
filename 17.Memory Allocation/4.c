#include <stdio.h>
#include <stdlib.h>
int fun1(int a, int b)
{
    printf("fun1\n");
    return a + b;
}
int fun2(int a, int b)
{
    printf("fun2\n");
    return a - b;
}
int main()
{
    // pointer to function returning int and having two arguments: an int and a float
    int (*funp)(int a, int b);
    funp = fun1;   // take the address of the function and assign it to the function pointer
   int x= (*funp)(1, 2); // call the function using the pointer

    funp = fun2; // reassign the pointer to point to fun2
   int y= funp(1, 2);  // an alternative way of calling a function using a pointer

   printf("%d %d\n",x,y);
    system("pause");
}
