#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2==0)
    {
        n/=2;
        cout<<n<<endl;
        for(int i=0; i<n; i++)
        {
            cout<<2<<" ";
        }
    }
    else
    {
        n-=3;
        n/=2;
        cout<<n+1<<endl;
        for(int i=0; i<n; i++)
        {
            cout<<2<<" ";
        }
        cout<<3;
    }
}
