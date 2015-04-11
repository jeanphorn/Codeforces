#include <stdio.h>
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <math.h>
#include <set>
#include <vector>
#include <map>

using namespace std;

#define sfd(n) scanf("%d",&n)
#define sfs(s) scanf("%s",s)
#define pfd(n) printf("%d\n",n)
#define pfs(s) printf("%s\n",s)

typedef long long ll;

#define maxn 1000005

int main()
{
	int n,i,j,x;
	vector<ll> a(maxn);
	vector<ll> tmp;

	sfd(n);
	for(i = 0; i < n; i++)
	{
		cin>>x;
		a[x]++;
	}
	
	ll ans = 0;

	for(i = maxn; i >=1; i--)
	{
		while(a[i] > 1)
		{
			tmp.push_back(i);
			a[i] -=2;
		}	
		if(a[i] == 1 && a[i-1] >= 1)
		{
			tmp.push_back(i-1);
			a[i-1]--;	
		}		
	}

	tmp.resize((int)tmp.size()-(tmp.size()&1));
	for(i = 0; i < tmp.size(); i +=2)
	{
		ans += tmp[i] * tmp[i+1];
	}

	cout<<ans<<endl;	

	return 0;

}

