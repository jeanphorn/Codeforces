#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n,d,sum;
    int t[101];

    while(scanf("%d %d",&n,&d)!=EOF)
    {
        sum = 0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&t[i]);
            sum += t[i];
        }
        if((n-1)*10+sum > d)
            printf("-1\n");
        else
        {
            printf("%d\n",(n-1)*2+(d-sum-(n-1)*10)/5);
        }
    }
    return 0;
}
