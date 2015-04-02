#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int n,m,i,j;
    int a[100001],l[100001];
    //freopen("in.txt","r",stdin);
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        int flag[100001]={0},flag2[100001]={0};
         int re[100001]={0};
         for(j=n-1;j>=0;j--)
        {
            if(flag2[a[j]]==0)
            {
                    flag[j]++;
                    flag2[a[j]]++;
            }

        }
        for(i=n-1;i>=0;i--)
            if(flag[i])re[i]=re[i+1]+flag[i];
            else
                re[i]=re[i+1];
        for(i=0;i<m;i++)
        {
             scanf("%d",&l[i]);
            printf("%d\n",re[l[i]-1]);
        }

    }
    return 0;
}
