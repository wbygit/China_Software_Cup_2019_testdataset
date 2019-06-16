#include <stdio.h>
int LeakExample(int c)
{
    void *p = malloc(10);
    if(c)
    {
           return -1;   
    }
    free(p);
    return 0;
 }

int main()
{
    LeakExample(1);
}
