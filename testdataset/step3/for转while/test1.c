#include <stdio.h>

int main()
{
    int a=0;
    int b=0;
    for(int i=0;i<3;i++)
    {
        if(a==0)
        {
            printf("%d\n",a);
        }
        if(b==0)
        {
            printf("%d\n",b);
        }
        if(a+b==0)
        {
            printf("%d\n",a+b);
        }
    }
}
