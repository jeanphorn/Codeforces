#include <stdio.h>
#include <map>

using namespace std;

#define maxn 200010

int main()
{	
	int n;
	char kyDoor[maxn];

	int i,sum;
	map<int,int> mark;
	while(scanf("%d",&n) != EOF)
	{
		sum =0;
		scanf("%s",kyDoor);
		int len = n*2 - 2;
		for(i = 0; i < len; i +=2)
		{
			mark[kyDoor[i]-'a']++;
			if(mark[kyDoor[i+1]-'A'] == 0)
				sum ++;
			else 
				mark[kyDoor[i+1]-'A']--;
		}
		
		printf("%d\n",sum);
	}
	
	return 0;
}
