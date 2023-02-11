#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    int table[tc][tc];
    for(int i=0; i<tc; i++)
    {
        table[0][i]=1;
        table[i][0]=1;
    }
    for(int i=1; i<tc; i++)
    {
        for(int j=1; j<tc; j++)
        {
            table[i][j]=table[i][j-1] + table[i-1][j];
        }
    }
    cout<<table[tc-1][tc-1]<<endl;

}


