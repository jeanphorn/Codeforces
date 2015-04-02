#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cmath>

using namespace std;

int main()
{
    string str,usd;
    //freopen("in.txt","r",stdin);
    while(cin>>str)
    {
        cin>>usd;
        int left,right,num,re,dis;
        left=str.find('|');
        right=str.length()-left-1;
        num=str.length()-1+usd.length();
        dis=left-right;
        re=num/2;
        if((num&1)!=0||abs(dis)>usd.length())
            printf("Impossible\n");
        else
        {
            int i,j=0;
           for(i=0;i<re;i++)
           {
               if(i<left) cout<<str[i];
               else cout<<usd[j++];
           }
           cout<<str[left++];
           for(i=0;i<re;i++)
           {
               if(left<str.length()) cout<<str[left++];
               else cout<<usd[j++];
           }
           cout<<endl;
        }
    }

    return 0;
}
