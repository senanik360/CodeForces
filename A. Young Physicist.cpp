#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row, r1=0, r2=0, r3=0, M[100][100];
    cin>>row;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>M[i][j];
        }
        r1+=M[i][0];
        r2+=M[i][1];
        r3+=M[i][2];
    }
    if(r1==0 && r2==0 && r3==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
