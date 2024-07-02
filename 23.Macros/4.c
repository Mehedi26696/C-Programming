//Macro with arguments (benefit: works with all data types)

#include<stdio.h>
#define square(x) (x)*(x)
int main()
{
    int x=5;
    double y=4.5;
    int p=square(x);
    double z=square(y);
    printf("%d \n",p);
    printf("%lf \n",z);
    return 0;
}