#include <iostream>
#include <stdio.h>

using namespace std;

__int64 solve(__int64 m, __int64 n)
{
    __int64 sum = 0;

    while(n)
    {
        sum += m/n;
        __int64 tm = m%n;
        m = n;
        n = tm;


    }
    return sum;
}

int main()
{
    __int64 a,b;
    while(scanf("%I64d%I64d",&a,&b)!=EOF)
    {

        printf("%I64d\n",solve(a,b));
    }
    return 0;
}
