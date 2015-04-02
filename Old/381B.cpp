#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;
#define maxn 100005
int main()
{
    int n, a[maxn];
    int i;
    //freopen("in.txt","r",stdin);
    while(scanf("%d",&n)!=EOF)
    {
       for(i=0;i<n;i++)
            scanf("%d",&a[i]);
       sort(a,a+n);
       vector<int> re,right;
       re.push_back(a[0]);
       for(i=1;i<n;i++)
       {
           if(a[i]>a[i-1])re.push_back(a[i]);
           else right.push_back(a[i]);
       }
       int len1=re.size(),len2=right.size();
        if(len1&&len2&&re[len1-1]>right[len2-1])re.push_back(right[len2-1]);
       for(i=len2-2;i>=0;i--)
       {
          if(right[i]<right[i+1])re.push_back(right[i]);
       }
       int len3=re.size();
       printf("%d\n",len3);
       for(i=0;i<len3;i++)
        printf("%d ",re[i]);
       printf("\n");
    }
    return 0;
}
