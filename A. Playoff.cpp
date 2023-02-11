#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int tc,n,m;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        if(n==1)
            cout<<1<<endl;
        else
        {
            m=pow(2,n);
            cout<<m-1<<endl;
        }

    }
}
