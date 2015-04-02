#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n,k;
    int i,j;
    int power[100002];
    //freopen("in.txt","r",stdin);
    while(scanf("%d %d",&n,&k)!=EOF)
    {
        for(i=0;i<n;i++)
            scanf("%d",&power[i]);
        int lowd=0,mins=999999999;
        for(i=0;i<k;i++)
        {
            int sum=0;

           for( j=i;j<n;j+=k)sum+=power[j];
            if(sum<mins)
                {
                    lowd=i;
                    mins=sum;
                }
        }
        printf("%d\n",lowd+1);
    }
    return 0;
}
