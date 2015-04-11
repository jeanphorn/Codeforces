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

int main()
{
	int n,i,j,cnt;
	char s[105];

	sfd(n);
	sfs(s);
	for(i = 0; i < n; i++)
	{
		if(s[i] == '*')
		{
			for(j = 1; j < n; j++)
			{
				cnt =0;
				for(int k = 0; k < 5; k++)
					if(i+k*j < n)
						cnt += s[i+k*j]=='*';
				if(cnt ==5)
				{
					printf("yes\n");
					return 0;
				}
			}
		}
	}
	printf("no\n");

	return 0;

}
