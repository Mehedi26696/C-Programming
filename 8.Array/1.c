#include<stdio.h>

int main()
{
    int marks[4];
    marks[0]=10;
    marks[1]=20;
    marks[2]=30;
    marks[4]=80;


    printf("Marks of student 1 is %d\n",marks[0]);
    marks[0]=15;
    printf("Marks of student 1 is %d\n",marks[0]);

    return 0;
}