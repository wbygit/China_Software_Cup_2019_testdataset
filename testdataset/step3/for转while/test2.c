#include <stdio.h>

int main()
{
   for(int i=0;i<2;)
   {
       i++;
       printf("不进行转换\n");
   }
   for(int i=0;i<2;i++)
   {
       printf("进行转换\n");
   }
}
