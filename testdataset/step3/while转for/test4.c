/// while Change to for  and  not Nested-free   can transfoem
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   int num=0;
   while(num<2)
   {
       num++;
       printf("%d\n",num);
       int cnt=4;
       while(cnt>0)
       {
           cnt--;
           printf("%d\n",num+cnt);
       }
   }
}
