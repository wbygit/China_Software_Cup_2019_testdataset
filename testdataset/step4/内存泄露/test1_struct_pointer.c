#include <stdio.h>
#include <stdlib.h>

struct Pointer
{
    int *p;
};

void f(int t)
{
    struct Pointer p;
    p.p = malloc(sizeof(int));
    if(0)
    {
        free(p.p);
    }
    int *pint = malloc(sizeof(int));
}

int main()
{
    f(1);
    return 0;
}