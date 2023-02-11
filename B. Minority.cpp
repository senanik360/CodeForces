#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc, counta=0,countb=0;
    cin>>tc;
    string s;
    for(int i=0; i<tc; i++)
    {
        counta=0,countb=0;
        cin>>s;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='0') counta++;
            else countb++;
        }
        if(counta!=countb) cout<<min(counta,countb)<<endl;
        else
            cout<<countb-1<<endl;
    }
}
