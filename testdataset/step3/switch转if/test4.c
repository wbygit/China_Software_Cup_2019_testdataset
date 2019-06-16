#include <stdio.h>
void Step1(int a)
{
  int i=0;
  int sum=0;
  for(;i<a;i++)
  {
      sum+=i;
  }
  switch(sum)
  {
      case 10:printf("10\n");break;
      case 20:printf("20\n");break;
      case 30:printf("30\n");break;
      case 40:printf("40\n");
  }
}
void Step2(int a)
{
  printf("a=0\n");
}
void Step3(int a)
{
 int i=a;
  int sum=0;
  for(;i>0;i++)
  {
      sum+=i;
  }
  switch(sum)
  {
      case -10:printf("-10\n");break;
      case -20:printf("-20\n");break;
      case -30:printf("-30\n");break;
      default:printf("Other\n");
  }
}
int main ( )
{
    int a=0;
    if(a>0)
    {
        Step1(a);
    }
    else if(a==0)
    {
        Step2(a);
    }
    else
    {
        Step3(a);
    }
}

