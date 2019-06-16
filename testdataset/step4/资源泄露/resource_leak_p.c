#include <stdio.h>
#include <stdlib.h>
 void Test(int c)
{
  FILE *p = fopen("foo.c", "rb");
  if(c)
  {
      return;
  }
  fclose(p);
}
int main()
{
   Test(2);
}
