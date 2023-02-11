#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,count=0;
        string s;
        cin>>n;
        cin>>s;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]!=s[i+1])
            {
                for(int j=i+1; j<s.size(); j++)
                {
                    if(s[i]==s[j])
                    {
                        count++;
                    }
                }
            }
        }
        if(count>0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
