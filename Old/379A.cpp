#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{

    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        int sum=a;
        while(a/b)
        {
            sum+=a/b;
            a=a/b+a%b;
        }
        printf("%d\n",sum);
    }
    return 0;
}
