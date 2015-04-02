#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;


int main()
{
    int n,s,sum,maxv;
    int a[100];
    while(scanf("%d%d",&n,&s)!=EOF)
    {
        maxv=0;
        sum = 0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            sum+=a[i];
            if(a[i]>maxv)
                maxv=a[i];
        }
        if(s<sum-maxv)
            printf("NO\n");
        else
            printf("YES\n");

    }
    return 0;
}
