#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main()
{
    string soroban[10]={"O-|-OOOO","O-|O-OOO","O-|OO-OO","O-|OOO-O","O-|OOOO-",
                        "-O|-OOOO","-O|O-OOO","-O|OO-OO","-O|OOO-O","-O|OOOO-"};
    string n;
    while(cin>>n)
    {
        for(int j=n.length()-1;j>=0;j--)
           cout<<soroban[n[j]-'0']<<endl;
    }
    return 0;
}
