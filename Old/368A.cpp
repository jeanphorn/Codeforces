#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
int cmp ( const void *a , const void *b )
{
    return *(int *)a - *(int *)b;
}
int main()
{
    //freopen("in.txt","r",stdin);
    int n,d,m,i;
    int a[101];
    while(scanf("%d %d",&n,&d)!=EOF)
    {
        int sum=0,tmp=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            tmp+=a[i];
        }
        scanf("%d",&m);
        qsort(a,n,sizeof(a[0]),cmp);
        if(m<=n)
        {
            for(i=0;i<m;i++)
                sum+=a[i];
        }
        else
        {
            sum=tmp-(m-n)*d;
        }
        printf("%d\n",sum);
    }
    return 0;
}
