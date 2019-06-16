#include <stdio.h>
void Disp(int num)
{
    int sum=0;
    for(int i=0; i<num; i++)
    {
        sum+=i;
    }
    printf("%d\n",sum);
}
void Disp2(int num)
{
    int sum=0;
    for(int i=0; i<num; i++)
    {
        for(int j=0; j<i; j++)
        {
            for(int k=0; k<j; k++)
            {
                sum+=i;
            }
        }
    }
    printf("%d\n",sum);
}
int main()
{
    int a=0;
    int b;
    scanf("%d",&b);
    if(a==0)
    {
        Disp(10);
    }
    else if(b==0)
    {
        Disp2(20);
    }
    else if(a+b==0)
    {
        Disp(30);
    }
    printf("%d\n",a+b);
}
