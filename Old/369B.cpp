#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int i;
    int n,k,l,r,sall,sk;
    int a[1005];
    //freopen("in.txt","r",stdin);
    while(scanf("%d %d %d %d %d %d",&n,&k,&l,&r,&sall,&sk)!=EOF)
    {
        int d=sk/k,c=sk%k;
        for(i=n-1;i>=n-k;i--)
        {
            if(c==0)a[i]=d;
            else
            {
                if(c!=0)a[i]=d+1;
                c--;
            }
        }
        int sh=sall-sk;
        int m=n-k;
        if(m!=0)
        {
             d=sh/m;c=sh%m;
            for(i=0;i<m;i++)
            {
                if(c==0)a[i]=d;
                else
                {
                        if(c!=0)a[i]=d+1;
                        c--;
                }
            }
        }

        for(i=0;i<n-1;i++)
            printf("%d ",a[i]);
        printf("%d\n",a[n-1]);
    }
    return 0;
}
