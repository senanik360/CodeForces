#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int r=0, g=0, b=0,i;
        string s;
        cin>>s;
        for(i=0; i<s.size(); i++)
        {
            if(s[i]=='r')
            {
                r++;
            }
            if(s[i]=='g')
            {
                g++;
            }
            if(s[i]=='b')
            {
                b++;
            }
            if(s[i]=='R')
            {
                if(r>0)
                {
                    continue;
                }
                else
                {
                    cout<<"NO"<<endl;
                    break;
                }
            }
            if(s[i]=='G')
            {
                if(g>0)
                {
                    continue;
                }
                else
                {
                    cout<<"NO"<<endl;
                    break;
                }
            }
            if(s[i]=='B')
            {
                if(b>0)
                {
                    continue;
                }
                else
                {
                    cout<<"NO"<<endl;
                    break;
                }
            }

        }
        if(i==s.size())
        {
            cout<<"YES"<<endl;
        }

    }

}
