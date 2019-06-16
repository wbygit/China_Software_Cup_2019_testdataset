#include <stdio.h>
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
            for(int i=0;i<3;i++)
            {
                printf("%d\n",i+num+cnt);
            }
        }
    }
}
