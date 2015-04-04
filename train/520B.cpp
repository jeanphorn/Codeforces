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

	int n,m;
	while(scanf("%d %d",&n,&m) != EOF)
	{
		int cnt = 0;
		while(m > n)
		{
			m = (m&1)?m+1:m/2;
			cnt ++;
		}
		printf("%d\n",cnt+n-m);
	}
	return 0;
}
