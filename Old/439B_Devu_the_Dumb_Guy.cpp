#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
    int n,d;
    __int64 sum;
    int t[100000+10];

    while(scanf("%d %d",&n,&d)!=EOF)
    {
        sum = 0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&t[i]);
        }

        sort(t,t+n);
        __int64 k=d;
        for(int i=0;i<n;i++)
        {
            if(k<1)
                k = 1;
            sum += t[i] * k;
            k--;
        }

        printf("%I64d\n",sum);
    }
    return 0;
}
