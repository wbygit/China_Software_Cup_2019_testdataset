/// for Change to while  and  Nested-free   can transfoem
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a=0;
    int b=0;
    int sum=0;
    for(int i=0; i<10; i++)
    {
        printf("%d\n",i);
    }
    int ii=0;
    for(; ii<5; ii++)
    {
        a++;
        b++;
        sum+=(a+b);
    }
    for(int i=0;;)
    {
        printf("only one\n");
        i++;
        if(i>2)
        {
            break;
        }
    }
    for(;;)
    {
        if(ii<=0)
        {
            break;
        }
        a--;
        b--;
        sum-=(a+b);
        ii--;
    }
    printf("%d\n",sum);
}
