#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int count=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9')
        {
            cout<<"YES"<<endl;
            break;
        }
        else
        {
            count++;
        }
    }
    if(count>=s.size())
    {
        cout<<"NO"<<endl;
    }
}

