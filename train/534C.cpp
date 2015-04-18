#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <math.h>
#include <set>
#include <vector>
#include <map>
#include <cmath>

using namespace std;

#define sfd(n) scanf("%d",&n)
#define sfs(s) scanf("%s",s)
#define pfd(n) printf("%d\n",n)
#define pfs(s) printf("%s\n",s)
#define fori(n) for(int i = 0; i <(int)n; i++)
#define max(a, b)  (((a) > (b)) ? (a) : (b))
#define min(a, b)  (((a) < (b)) ? (a) : (b))

#define maxn 200010

typedef long long ll;

int main()
{
	ll d[maxn],ans[maxn];
	ll n,A,sum,i;
	ll mn,mx;

	cin>>n>>A;
	sum = 0;
	for(i = 0; i < n; i++)
	{
		cin>>d[i];
		sum += d[i];
	}

	for(i = 0; i < n; i++)
	{
		mn = min(d[i], max(1,A-sum+d[i]));
		mx = max(1,min(d[i],A-n+1));
		ans[i] = d[i] - mx +mn - 1;	
	}

	for(i = 0; i < n; i++)
	{
		if(i) cout <<" ";
		cout<<ans[i];
	}
	cout<<endl;

	return 0;
}
