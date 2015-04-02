#include <iostream>
#include <string>
#nclude <iostream>
#include <stdio.h>

using namespace std;

int gcd(int a,int b)
{
    return b==0?a:gcd(b,a%b);
}

int main()
{
    int n;
    int num[100];
    int mGcd=1;
    while(scanf("%d",&n)!=EOF)
    {
        int maxN=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&num[i]);
            if(i)
                mGcd=gcd(mGcd,num[i]);
            else
                mGcd=num[i];
            maxN=maxN>num[i]?maxN:num[i];
        }
        if((maxN/mGcd-n)&1)
            printf("Alice\n");
        else
            printf("Bob\n");
    }
    return 0;
}include <stdio.h>
typedef long long ll;

using namespace std;

int main()
{
    int i,j;
    int a;
    //freopen("in.txt","r",stdin);
    string s;
    while(scanf("%d",&a)!=EOF)
    {

        cin>>s;
        int len=s.length();
        ll visit[40010]={0};
        for(i=0;i<len;i++)
        {
            ll sum=0;
            for(j=i;j<len;j++)
            {
                sum+=(s[j]-'0');
                visit[sum]++;
            }
        }
        ll num=0;
        if(a==0)
            for(i=0;i<40000;i++)
                num+=visit[0]*visit[i];
        for(i=1;i<=40000;i++)
            if(a%i==0&&a/i<=40000)
                num+=visit[i]*visit[a/i];
       cout<<num<<endl;
    }
    return 0;
}
