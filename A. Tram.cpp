#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc, a,b,k=0,m=0;
    cin>>tc;
    for(int i=0; i<tc; i++)
    {
        cin>>a>>b;
        m=(a+k)-b;
        if(m<0) k=0;
        else k=m;
    }
    cout<<m<<endl;
}
