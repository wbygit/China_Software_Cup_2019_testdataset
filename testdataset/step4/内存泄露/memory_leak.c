#include <stdio.h>
int LeakExample(int i)
{
    void *p = malloc(10);
    void *q = malloc(4);
    if(i > 0)
    {
          p = q;      /* “p”被重新赋值，指向新的地址，之前指向的内存被泄漏*/
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
