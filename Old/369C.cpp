#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

const int N=100005;
vector< int > road[N], type[N],re;
bool dfs(int cur, int parent)
{
    bool fix=0;
    for(int i=0;i<road[cur].size();i++)
    {
        int next=road[cur][i];
        if(next!=parent)
        {
             bool nextfix=dfs(next,cur);
             if(!nextfix&&type[cur][i]==2)
             {
                re.push_back(next);
                fix=1;
             }
             if(nextfix)
                fix=1;
        }

    }
    return fix;
}

int main()
{
    int n;
    int x,y,t;
    //freopen("in.txt","r",stdin);
    scanf("%d",&n);
        for(int i=0;i<n-1;i++)
        {
            scanf("%d %d %d",&x,&y,&t);
            road[x].push_back(y);
            road[y].push_back(x);
            type[x].push_back(t);
            type[y].push_back(t);

        }
        dfs(1,-1);
        int len=re.size();
        printf("%d\n",len);
        for(int i=0;i<len;i++)
            printf("%d ",re[i]);
        printf("\n");
    return 0;
}
