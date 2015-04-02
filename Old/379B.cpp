#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n,a[305];
    char lr='R';
    //freopen("in.txt","r",stdin);
    while(scanf("%d",&n)!=EOF)
    {
        int sum=0;
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]),sum+=a[i];
        int cnt=0;
        bool right=true;
        while(sum)
        {
            if(cnt==0) lr='R',right=true;
            if(cnt==n-1)
            {
                right=false;
                lr='L';
            }
            if(right)
            {
                if(a[cnt])
                {
                    printf("P");
                    a[cnt]--;
                    sum--;
                    if(sum==0)break;
                }

                cnt++,printf("%c",lr);
            }
            else
            {
                if(a[cnt])
                {
                    printf("P");
                    a[cnt]--;
                    sum--;
                    if(sum==0)break;
                }

                cnt--,printf("%c",lr);
            }
        }
        printf("\n");
    }
    return 0;
}
