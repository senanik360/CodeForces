#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n,w,h,total;
    cin>>tc;
    while(tc--)
    {
        total=1;
        cin>>w>>h>>n;
        while(w%2==0)
        {
            w/=2;
            total*=2;
        }
        while(h%2==0)
        {
            h/=2;
            total*=2;
        }
        if(total>=n)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;

    }

}

