#include <iostream>
#include <stdio.h>
using namespace std;
#define maxn 1005
int main()
{
    int n,a[maxn];
    int i,j;
    //freopen("in.txt","r",stdin);
    while(scanf("%d",&n)!=EOF)
    {
        int player[2]={0};
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        i=0;j=n-1;
        int cnt=0;
        while(i<=j)
        {
            if(a[i]>a[j])
            {
                player[(cnt&1)==0?0:1]+=a[i];
                i++;
                cnt++;
            }
            else
            {
                player[(cnt&1)==0?0:1]+=a[j];
                j--;
                cnt++;
            }
        }
        printf("%d %d\n",player[0],player[1]);
    }

    return 0;
}
