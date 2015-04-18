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
#define fori(n) for(int i = 0; i <(int)n; i++)

typedef long long ll;


int main()
{
	int v1,v2,t,d;
	scanf("%d %d %d %d", &v1,&v2,&t,&d);

	if(v1 > v2) swap(v1,v2);

	int sum = 0;
	fori(t)
	{
		sum += min(v1+d*i,v2+d*(t-i-1));
	}
	
	pfd(sum);
			
	return 0;
}
