#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    long long int n;
    while(tc--)
    {
        cin>>n;
        if(n/2020 >= n%2020)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}

