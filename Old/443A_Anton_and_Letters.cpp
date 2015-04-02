#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int mark[26]={0};
    int len = s.length();
    int cnt = 0;
    for(int i=0;i<len;i++)
    {
        if(!mark[s[i]-'a'] && s[i]>='a'&&s[i]<='z')
        {
            cnt++;
            mark[s[i]-'a']=1;
        }
    }
    cout << cnt << endl;
    return 0;
}
