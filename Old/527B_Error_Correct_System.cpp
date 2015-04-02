#include <stdio.h>

#define MAX_LEN 200005
using namespace std;

char s[MAX_LEN],t[MAX_LEN];
int position[27][27];

int main()
{
    int i,j,k,n,ans;
    int num, p1,p2;
    bool flag;

    while(scanf("%d",&n) != EOF)
    {
        ans = 0;
        num = 0;
        flag = false;
        p1 = -1; p2 = -1;

        for(i = 0; i < 27; i++)
            for(j= 0; j < 27; j++)
                position[i][j] = 0;

        scanf("%s%s",s,t);

        for(i = 0; i < n; i++)
        {
            if(s[i] != t[i])
            {
                ans ++;
                position[s[i]-'a'][t[i]-'a'] = i+1;
            }
        }

        for(i = 0; i < 26; i++)
        {
            for(j = 0; j < 26; j++)
            {
                if(i != j)
                {
                    if(position[i][j] > 0)
                    {
                        if(position[j][i] > 0)
                        {
                            p1 = position[i][j];
                            p2 = position[j][i];
                            num = 2;
                            flag = true;
                            break;
                        }
                        else
                        {
                            for (k = 0; k < 26; k++)
                            {
                                if(position[k][i] > 0)
                                {
                                    p1 = position[i][j];
                                    p2 = position[k][i];
                                    num = 1;
                                    break;
                                }
                            }
                        }
                    }
                }
            }
            if (flag)
            {
                break;
            }
        }
        printf("%d\n",ans - num);
        printf("%d %d\n",p1,p2);
    }

    return 0;
}
