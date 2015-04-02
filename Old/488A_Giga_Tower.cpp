#include <stdio.h>
#include <stdlib.h>


int main()
{
    __int64 a;
    __int64 b;
    __int64 tmp;
    int yu,flag;

    while(scanf("%I64d",&a)!=EOF)
    {

        for( b = 1; b <= 16; b++)
        {
             flag = 0;
           tmp = a+b;
            while(tmp)
            {

                yu = tmp%10;
                tmp = tmp/10;

                if(yu == 8 || yu == -8)
                {
                    flag = 1;
                    break;
                }
            }
            if(flag)
                break;
        }
        printf("%d\n",b);
    }
    return 0;
}
