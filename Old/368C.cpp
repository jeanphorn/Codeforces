#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cmath>

using namespace std;

int main()
{
    char str[100005];
    int m,l,r;
    //freopen("in.txt","r",stdin);
    while(scanf("%s",str)!=EOF)
    {
        int len=strlen(str);
        scanf("%d",&m);
        int visit[len+10][256];
        memset(visit,0,sizeof(visit));
        for(int i=len-1;i>=0;i--)
        {
            visit[i][str[i]]++;
            visit[i]['x']+=visit[i+1]['x'];
            visit[i]['y']+=visit[i+1]['y'];
            visit[i]['z']+=visit[i+1]['z'];
        }                     //for(int i=0;i<len;i++)cout<<str[i]<<":"<<visit[i][str[i]]<<endl;
        while(m--)
        {

            scanf("%d %d",&l,&r);
            int sublen=r-l+1;
            int x=visit[l-1]['x']-visit[r]['x'];
            int y=visit[l-1]['y']-visit[r]['y'];
            int z=visit[l-1]['z']-visit[r]['z'];      //cout<<"x--"<<x<<" y--"<<y<<" z--"<<z<<endl;
            if(sublen<3)printf("YES\n");
            else if(sublen%3==0)
            {
                printf(x==y&&y==z&&z==sublen/3?"YES\n":"NO\n");
            }
            else
            {
                 if(abs(x-y)<=1&&abs(y-z)<=1&&abs(z-x)<=1 )
                    printf("YES\n");
                 else
                    printf("NO\n");
            }

        }
    }
    return 0;
}
