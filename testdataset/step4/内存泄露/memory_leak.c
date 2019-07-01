#include <stdio.h>
int LeakExample(int i)
{
    void *p = malloc(10);
    void *q = malloc(4);
    if(i > 0)
    {
          p = q;
    } else
    {
          free(q);
    }
  free(p);
  return 0;
}

int main()
{
    LeakExample(1);
}
