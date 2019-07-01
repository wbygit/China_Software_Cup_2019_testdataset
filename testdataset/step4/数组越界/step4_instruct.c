#include <stdio.h>

struct Array
{
    int a[5+5];
};

struct Array a;

int main()
{
    int c;
    for(int i = 0; i <= 11; i++)
    {
        int b = a.a[i];
        c = a.a[i*2];
        int d = 1;
        printf("%d\n", b);
        printf("%d\n", d);
        printf("test\n");
    }
    return 0;
}