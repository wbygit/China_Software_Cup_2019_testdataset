#include <stdio.h>
int main()
{
    FILE *a = fopen("good.c", "r");
    if (!a)
        return 0;

    if(1+1 > 2)
    {
        fclose(a);
    }

    return 0;
}
