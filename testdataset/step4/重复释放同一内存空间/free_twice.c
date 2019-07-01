#include <stdio.h>
#include <stdlib.h>

int f()
{
    return rand();
}

struct Pointer
{
    int *p;
};

int main()
{
    struct Pointer p;
    p.p = malloc(10*sizeof(int));
    if(f() > 1)
    {
        free(p.p);
    }
    free(p.p);
    return 0;
}
