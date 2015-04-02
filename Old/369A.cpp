#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{
    int n,m,k,i;

    //freopen("in.txt","r",stdin);
    while(scanf("%d %d %d",&n,&m,&k)!=EOF)
    {
        int a[3]={0};
        int tmp;
        for(i=0;i<n;i++)
        {
             scanf("%d",&tmp);
             a[tmp]++;
        }
        int sum=0;
        if(a[1]>=m)sum+=a[1]-m,m=0;
        else
            m=m-a[1];
        if(a[2]>=m+k)sum+=a[2]-m-k;
        printf("%d\n",sum);
    }
    return 0;
}
