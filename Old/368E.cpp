#include <iostream>
#include <stdlib.h>
#include <stdio.h>
typedef long long ll;

using namespace std;

int cmp ( const void *a , const void *b )
{
    return *(int *)a - *(int *)b;
}
int main()
{
    int n,m,i,j;
    int q[100002],w[100002];
    ll f[100002];
    f[1]=1;
    for(i=2;i<100003;i++)
    {
         f[i]=i&1?(i-1)*i/2+1:i*(i-1)/2+i/2;
    }
    //freopen("in.txt","r",stdin);
     while(cin>>n>>m)
    {

        for(i=0;i<m;i++)
        {
            cin>>q[i]>>w[i];
        }
        qsort(w,m,sizeof(w[0]),cmp);
        for(i=1;;i++)
            if(f[i]>n)break;
        i--;
        ll sum=0;
        if(i>=m)
        {
            for(j=0;j<m;j++)
                sum+=w[j];

        }
        else
        {
            int cnt=i,j=m-1;
            while(cnt--) sum+=w[j--];
        }
        cout<<sum<<endl;

    }
    return 0;
}
