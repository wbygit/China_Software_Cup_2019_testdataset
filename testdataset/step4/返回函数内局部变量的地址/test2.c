#include <stdio.h>

int Fun(int x,int y,int z)
{
    int max;
    if(x>=y&&x>=z)
        return(&x);
    if(y>=x&&y>=z)
        return(&y);
    return(&z);
}
main()
{
    int a,b,c,*p;
    printf("\nPlease input a,b,c:\n");
    scanf("%d%d%d",&a,&b,&c);
    p=Fun(a,b,c);
    printf("a=%d,b=%d,c=%d,*p=%d\n",a,b,c,*p);
}
