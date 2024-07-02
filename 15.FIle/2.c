// File creation
//  FILE *fptr;
//  fptr = fopen("filename.txt", "w");

#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *ptr;

    ptr = fopen("2.txt", "w");
    if (ptr == NULL)
    {
        printf("The file is not opened. The program will "
               "exit now");
        exit(0);
    }
    else
    {
        printf("The file is created Successfully.");
    }
    fclose(ptr);

    return 0;
}