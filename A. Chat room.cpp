#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string m="hello";
    int k=0;
    //sort(s.begin(),s.end());
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]==m[k])
        {
            k++;
        }
    }
    if(k==5) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
