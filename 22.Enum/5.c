// All enum constants must be unique in their scope. For example, the following program fails in compilation.

#include <stdio.h>
enum state
{
    working,
    failed
};
enum result
{
    failed,
    passed
};

int main()
{
    return 0;
}