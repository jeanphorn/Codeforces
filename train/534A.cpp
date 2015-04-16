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

int main()
{
	int n,i,j,cnt;
	
	sfd(n);

	if(n <= 2)
	{
		pfd(1);
		pfd(1);
	}
	else if(n == 3)
	{
		pfd(2);
		printf("%d %d\n",1,3);	
	}
	else if(n == 4)
	{
		pfd(4);
		printf("%d %d %d %d\n",3,1,4,2);
	}
	else
	{
		pfd(n);
		for(i = 1; i <= n; i += 2)
			printf("%d ",i);
		for(i = 2; i <= n; i+= 2)
			if(i == n || i == n-1)
				printf("%d\n",i);
			else
				printf("%d ",i);
	}
	return 0;
}
