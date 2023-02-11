#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    string s;
    cin>>tc;
    for(int i=0; i<tc; i++)
    {
        cin>>s;
        cout<<s[0];
        for(int i=1; i<s.size(); i+=2)
        {
            cout<<s[i];
        }
        cout<<endl;
    }
}
