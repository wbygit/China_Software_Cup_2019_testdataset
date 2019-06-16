/// for Change to while  and  not Nested-free   can transfoem
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    for(int i=0; i<2; i++)
    {
        for(int j=0;;)
        {
            j++;
            int t=0;
            for(; t<3; t++)
            {
                int b=2;
                for(;;)
                {
                    b++;
                    printf("%d\n",b);
                    if(b>4)
                    {
                        break;
                    }
                }
            }
            if(j>2)
            {
                break;
            }
        }
    }
}
