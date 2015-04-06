#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <math.h>
#include <set>
#include <vector>
#include <map>

using namespace std;

int main()
{

	int n;
	char road[105];
	while(scanf("%d",&n) != EOF)
	{
		scanf("%s",road);

		int m = n/5;
		int cnt;
		for(int i = 1; i <= m; i++)
		{
			 cnt = 0;
			for(int j = 0; j < n-i; j+=i)
			{
				if(cnt == 5)
				{
					printf("yes\n");
					return 0;
				}
				else if(road[j] != road[j+i])
				   continue;
				else
					cnt++;	
			}

		}
		printf("no\n");
	}
	return 0;
}
