#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main()
{
   // freopen("in.txt","r",stdin);
    int n,k;
    string str[101];
    while(scanf("%d %d",&n,&k)!=EOF)
    {
        int num=0;
        for(int i=0;i<n;i++)
        {
            int cnt[10]={0};
            cin>>str[i];
            for(int j=0;j<str[i].length();j++)
                if(cnt[str[i][j]-'0']==0)cnt[str[i][j]-'0']++;
            int sum=0;
            for(int j=0;j<=k;j++)
                sum+=cnt[j];
            if(sum==k+1) num++;

        }
        printf("%d\n",num);
    }
    return 0;
}
