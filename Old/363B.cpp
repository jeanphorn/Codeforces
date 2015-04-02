#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

struct Fence
{
    int value;
    int index;
}fence[150000];

int main()
{
    int n,k;
    int i,j;
    while(scanf("%d %d",&n,&k)!=EOF)
    {
        memset(fence,0,sizeof(fence));
        int heights[150000];
        for(i=0;i<n;i++)
        {
            scanf("%d",&heights[i]);
        }
        Fence fen;
        fen.index=0;
        fen.value=k*100;
        j=0;
        int m=k;
        for(i=0;i<n;i++)
        {
            if(m>0)
            {
                 fence[j].value+=heights[i];
                 m--;
            }
            else
            {
                fence[j].index=j;
                if(fence[j].value<fen.value)
                {
                    fen.index=j;
                    fen.value=fence[j].value;
                }
                    int tmp=fence[j].value+heights[i]-heights[j];
                    fence[++j].value=tmp;
                 fence[j].index=j;
                if(fence[j].value<fen.value)
                {
                    fen.index=j;
                    fen.value=fence[j].value;
                }
            }
        }
        printf("%d\n",fen.index+1);
    }

    return 0;
}
