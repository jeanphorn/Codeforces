#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int cmp ( const void *a , const void *b )
{
    return *(int *)a - *(int *)b;
}
bool isExist(int num[],int len,int k)
{
    for(int i=0;i<len;i++)
        if(num[i]==k)
            return 1;
    return 0;
}
int main()
{
    int n,m;
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        int flag=1;
        if(m==0)
        {
            printf("YES\n");
        }
        else
        {
        int dirty_stars[3000]={0};
        for(int i=0;i<m;i++)
            scanf("%d",&dirty_stars[i]);
        if(!isExist(dirty_stars,m,1))
            dirty_stars[m++]=1;
        else
            flag=0;
        if(n!=1&&!isExist(dirty_stars,m,n))
            dirty_stars[m++]=n;
        else
            flag=0;
        qsort(dirty_stars,m,sizeof(dirty_stars[0]),cmp);

        if(n==1||n==2)
            printf("NO\n");
        else
        {
            for(int i=2;i<m-2;i++)
            {
                if(dirty_stars[i-1]+1==dirty_stars[i]&&dirty_stars[i]+1==dirty_stars[i+1])
                   {
                        flag=0;
                        break;
                    }
            }
            if(flag)printf("YES\n");
            else printf("NO\n");
        }
    }
    }
    return 0;
}
