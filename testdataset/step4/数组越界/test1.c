#include <stdio.h>

int a[10];

int main()
{
    for(int i = 0; i <= 10; i++)
    {
        a[i] = i;
    }
    for(int i = 0; i <= 10; i++)
    {
        printf("%d", a[i]);
    }
    return 0;
}