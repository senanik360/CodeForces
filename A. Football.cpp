#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int count1=0, count2=0;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='0')
        {
            count1++;
            if(count2<7)count2=0;
        }
        else
        {
            count2++;
            if(count1<7)count1=0;
        }
    }
    if(count1>=7 || count2>=7)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
