#include <iostream>
#include <stdio.h>
#include <string>
#define MAXN 105
using namespace std;

char a[MAXN];
int n;

int main()
{
	    while(scanf("%d",&n) != EOF)
		{
			int mark[26] = {0};
	       bool flag = true;
	        scanf("%s",a);
		    for(int i = 0; i < n; i++)
		    {
			   mark[tolower(a[i])-'a'] = 1;
		    }
			 for(int i = 0; i < 26; i++)
		          if(mark[i] == 0)
				 {
	                printf("NO\n");
				  	flag = false;
					break;				
				 }

			 if(flag)
				 printf("YES\n")												    }
		    return 0;
}
