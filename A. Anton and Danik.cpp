#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, counta=0,
           countd=0;
    string s;
    cin>>n>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='A')
            counta++;
        else countd++;
    }
    if(counta>countd) cout<<"Anton"<<endl;
    else if (counta<countd) cout<<"Danik"<<endl;
    else cout<<"Friendship"<<endl;
}

