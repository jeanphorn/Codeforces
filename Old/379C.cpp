#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
struct Pre
{
    int ind;
    int va;
} user[300005];


int cmp(Pre a, Pre b)
{
    return a.va<b.va;
}

int main()
{
    int n;
    int ans[300005];
    //freopen("in.txt","r",stdin);
    while(scanf("%d",&n)!=EOF)
    {

        for(int i=0;i<n;i++)
            scanf("%d",&user[i].va),user[i].ind=i;
        sort(user,user+n,cmp);
        int cur=0;
        for(int i=0;i<n;i++){
            ans[user[i].ind]=cur+1>user[i].va?cur+1:user[i].va;
            cur=ans[user[i].ind];
        }
        for(int i=0;i<n-1;i++)
            printf("%d ",ans[i]);
        printf("%d\n",ans[n-1]);
    }
    return 0;
}
