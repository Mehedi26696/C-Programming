//structure sizeof

#include <stdio.h>
#include<string.h>
struct student_database
{
    char name[10];
    int roll;
    int marks;
} s;

void main()
{   printf("%d\n",sizeof(s));
    strcpy(s.name, "Hello\n");
    s.marks = 500;
    printf("Name : %s", s.name);
    printf("Marks of Student : %d\n", s.marks);
    printf("%d\n",sizeof(s));
}