#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int main()
{
    int a,b;
    int r,t,l;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        r=0;t=0;l=0;
        for(int i=1;i<=6;i++)
        {
            if(abs(a-i)<abs(b-i))r++;
            else if(abs(a-i)>abs(b-i))l++;
            else t++;
        }
        printf("%d %d %d\n",r,t,l);
    }
    return 0;
}
