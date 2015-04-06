#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <math.h>
#include <set>
#include <vector>
#include <map>
#include <stdint.h>
#include <stdlib.h>

#define maxn 1000010

using namespace std;

int main()
{
	int n,a[maxn],b[maxn],i,j,cnt,sum;
	while(scanf("%d",&n) != EOF)
	{
		cnt = (1<<(n+1))-2;
		a[0] = 0;
		for(i = 1; i <= cnt; i++)
		{
			scanf("%d",&a[i]);
		}
		
		for(i = (1<<n) - 1; i <= cnt; i++)
			b[i] = 0;
		for(i = (1<<n) - 2; i >=0; i--)
			b[i] = max(a[2*i+1]+b[2*i+1], a[2*i+2]+b[2*i+2]);

		sum = 0;
		for(i = 1; i <= cnt; i++)
			sum += b[(i-1)/2] - b[i] - a[i];

		printf("%d\n",sum);
	}
	return 0;	
}

