#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main()
{
    string word;
    //freopen("in.txt","r",stdin);
    while(cin>>word)
    {
        int len=word.length();
        int flag[200002]={0};
       for(int i=1;i<len;i++)
       {
           if(word[i]-'0'==word[i-1]-'0')
                flag[i]=0;
            else
                flag[i]=1;
       }
      if(len<=3)
      {
          if(word[0]-'0'==word[1]-'0'&&word[1]-'0'==word[2]-'0')
            printf("%c%c\n",word[0],word[1]);
          else
            cout<<word<<endl;
      }
      else
      {
        string tmp="";
        tmp+=word[0];
        tmp+=word[1];
         for(int i=2;i<len;i++)
         {
             if(flag[i]!=0||(flag[i]==0&&flag[i-1]!=0))
                tmp+=word[i];
         }
       for(int i=1;i<tmp.length();i++)
       {
           if(tmp[i]-'0'==tmp[i-1]-'0')
                flag[i]=0;
            else
                flag[i]=1;
       }
       string re="";
       re+=tmp[0];
       re+=tmp[1];
       if(tmp[2])
            re+=tmp[2];
       for(int i=3;i<tmp.length();i++)
       {
           if(flag[i]!=0||(flag[i]==0&&flag[i-2]!=0))
                re+=tmp[i];
           else
            flag[i]=1;
       }
       cout<<re<<endl;
      }

    }
    return 0;
}
