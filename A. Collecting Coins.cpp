#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,a,b,c,k,mx,total;
    cin>>tc;
    while(tc--)
    {
        cin>>a>>b>>c>>k;
        mx = max(a, max(b,c));
        total=a+b+c+k;
        if(total%3==0 && total/3>=mx)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}
