#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n;
    int a[100005],b[100005];
    //freopen("in.txt","r",stdin);
    while(scanf("%d",&n)!=EOF)
    {
        int i=0,j=0;
        for(int k=0;k<n;k++)
            scanf("%d %d",&a[k],&b[k]);
        for(int k=0;k<n;k++)
            if(a[i]<b[j])i++;
            else j++;
        for(int k=0;k<n;k++)
            if(k<i||k<n/2) printf("1");
            else printf("0");
        printf("\n");
        for(int k=0;k<n;k++)
            if(k<j||k<n/2) printf("1");
            else printf("0");
        printf("\n");
    }
    return 0;
}
