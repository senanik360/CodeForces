#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,a,b,counta=0,countb=0;
    cin>>tc;
    while(tc--)
    {
        cin>>a>>b;
        if(a>b)  counta++;
        else if(a<b) countb++;
    }

    if(counta>countb)
    {
        cout<<"Mishka"<<endl;
    }
    else if(counta<countb)
    {
        cout<<"Chris"<<endl;
    }
    else
    {
        cout<<"Friendship is magic!^^"<<endl;
    }
}
