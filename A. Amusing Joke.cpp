#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,s3,sn;
    cin>>s1>>s2>>s3;
    sn=s1+s2;
    sort(sn.begin(), sn.end());
    sort(s3.begin(), s3.end());
    if(sn==s3)
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;

}
