#include <stdio.h>
int LeakExample(int i)
{
    void *p = malloc(10);
    void *q = malloc(4);
    if(i > 0)
    {
          p = q;      /* ��p�������¸�ֵ��ָ���µĵ�ַ��֮ǰָ����ڴ汻й©*/
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
