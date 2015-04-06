#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <math.h>
#include <set>
#include <vector>
#include <map>
#include <stdint.h>
#include <stdlib.h>

#define maxn 1000000005
typedef long long ll;

using namespace std;

int main()
{
	ll m,hr,hb,wr,wb;
	ll i,j;

    while(cin>>m)
	{
		cin>>hr>>hb>>wr>>wb;
		ll maxCnt = 0;

		if(double(hr)/wr < double(hb)/wb)
		{
			swap(hr,hb);
			swap(wr,wb);
		}                     
		ll tmpM = sqrt(m);
		if(  wr > tmpM)
		{
			for(i = 0; i <= m/wr; i++)
				maxCnt = max(maxCnt,i*hr+(m-i*wr)/wb*hb);

		}
		else
		{
			for(i = 0; i <= min(m/wb,wr); i++)
				maxCnt = max(maxCnt,i*hb+(m-i*wb)/wr*hr);

		}

		cout<<maxCnt<<endl;
	}
    return 0;
}
