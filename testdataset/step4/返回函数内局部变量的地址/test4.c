#include <stdio.h>

int *function(int a)
{
    return &a;
}

int main()
{
    int a = 1;
    int *p = function(a);
    return 0;
}