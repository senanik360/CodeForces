#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n,m;
    cin>>tc;
    while(tc--)
    {
        cin>>n>>m;
        if(n==1)
        {
            cout<<0<<endl;
        }
        else
        {
            if(n==2)
            {
                cout<<m<<endl;
            }
            else
            {
                cout<<2*m<<endl;
            }
        }
    }
}
