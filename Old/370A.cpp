#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int main()
{
    int rs,cs,rd,cd;
    int r,b,k;
    //freopen("in.txt","r",stdin);
    while(scanf("%d %d %d %d",&rs,&cs,&rd,&cd)!=EOF)
    {
        int ma,mi;
        if(rs==rd||cs==cd) r=1;
        else r=2;
        printf("%d ",r);
        b=0;
        if(rs+cs==rd+cd||rd-rs==cd-cs) b=1;
        else
        {
            ma=rd+cd>rs+cs?rd+cd:rs+cs;
            mi=rd+cd>rs+cs?rs+cs:rd+cd;
            if(((ma-mi)&1)==0)b=2;
        }
        printf("%d ",b);
        int k1,k2;

        ma=rd-rs;mi=cd-cs;
        if(abs(ma)<abs(mi))
        {
            k1=cs+ma;k2=cs-ma;
            k=abs(cd-k1)<abs(cd-k2)?abs(cd-k1):abs(cd-k2);
            k+=abs(ma);
        }
        else{
             k1=rs+mi;k2=rs-mi;
            k=abs(rd-k1)<abs(rd-k2)?abs(rd-k1):abs(rd-k2);
            k+=abs(mi);
        }
        printf("%d\n",k);
    }
    return 0;
}
