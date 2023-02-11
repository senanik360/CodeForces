#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int ptc,tc;
    cin>>ptc;
    while(ptc--)
    {
        cin>>tc;
        while(tc%2==0)
        {
            tc/=2;
        }
        if(tc==1)
        {
            cout<<"NO"<<endl;
        }
        else
            cout<<"YES"<<endl;
    }
}
