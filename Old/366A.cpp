#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n;
    int i,j;
    int guardp[4][4];
    //freopen("in.txt","r",stdin);
    while(scanf("%d",&n)!=EOF)
    {
        int cas=-1;
        for(i=0;i<4;i++)
            for(j=0;j<4;j++)
                scanf("%d",&guardp[i][j]);
        for(i=0;i<4;i++)
        {
            if(n-guardp[i][0]>=guardp[i][2]||n-guardp[i][0]>=guardp[i][3])
            {
                cas=1;
                printf("%d %d %d\n",i+1,guardp[i][0],n-guardp[i][0]);
                break;
            }
            else if(n-guardp[i][1]>=guardp[i][2]||n-guardp[i][1]>=guardp[i][3])
            {
                cas=1;
                printf("%d %d %d\n",i+1,guardp[i][1],n-guardp[i][1]);
                break;
            }
        }
       if(cas==-1)printf("-1\n");
    }
    return 0;
}
