#include <iostream>
#include <stdio.h>


using namespace std;

int matrix[100][100];
int solve(int row,int col)
{
    if(row%2)
        return row;
    else
    {
        int flag=1;
        for(int i=0,k=row-1;i<row/2;i++,k--)
            for(int j=0;j<col;j++)
                if(matrix[i][j]!=matrix[k][j])
                {
                    flag=0;
                    break;
                }
        if(flag)
            return solve(row/2,col);
        else
            return row;
    }
}

int main()
{
    int n,s;
    while(scanf("%d%d",&n,&s)!=EOF)
    {

        for(int i=0;i<n;i++)
        {
           for(int j=0;j<s;j++)
                scanf("%d",&matrix[i][j]);
        }
        printf("%d\n",solve(n,s));


    }
    return 0;
}
