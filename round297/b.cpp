#include <iostream>
#include <stdio.h>
#include <string.h>

#define maxn 100005

using namespace std;

int main()
{
    int m,a[maxn*2],l;
    char s[maxn*2];
    int len,i,j;
    while(scanf("%s",s) != EOF)
    {
	int mark[maxn] = {0};
        len = strlen(s);
        for( i =0; i < strlen(s); i++)
            a[i] = i;
        scanf("%d",&m);
        for( i = 0; i < m; i ++)
        {
            scanf("%d",&l);
	    mark[l-1] ++;
        }
	int cnt = 0;
	for(i = 0; i < len/2; i++)
	{
		cnt += mark[i];
		cnt &= 1;

		if(cnt)
		{
			char tmp = s[i];
			s[i] = s[len -i -1];
			s[len - i - 1] = tmp;
		}
	}

        printf("%s\n",s);
    }
    return 0;
}
