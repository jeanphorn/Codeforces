#include <iostream>
#include <stdio.h>
typedef long long ll;

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    int n,i;
    ll arr[100001];
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
            cin>>arr[i];
        int maxlen=0,len=0;
        if(n<3)maxlen=n;
        len=2;
        for(i=2;i<n;i++)
        {
            if(arr[i]==arr[i-1]+arr[i-2])
            {
                len++;
            }
            else{
            if(len>maxlen) maxlen=len;
                len=2;
            }
            if(len>maxlen) maxlen=len;
        }
        printf("%d\n",maxlen);
    }
    return 0;
}
