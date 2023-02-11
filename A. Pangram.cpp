#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n, count=1;
    cin>>n>>s;
    for(int i=0; i<n; i++)
    {
        s[i]=tolower(s[i]);
    }
    sort(s.begin(),s.end());
    for(int i=0; i<n-1; i++)
    {
        if(s[i]!=s[i+1])
        {
            count++;
        }
    }
    if(count==26)
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}
