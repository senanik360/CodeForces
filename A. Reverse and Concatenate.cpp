#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n,k,count=0;
    string s,s1;
    cin>>tc;
    while(tc--)
    {
        count=1;
        cin>>n>>k>>s;
        if(k==0)
        {
            cout<<"1"<<endl;
        }
        else
        {
            while(k--)
            {
                s1=s;
                reverse(s.begin(),s.end());
                if(s1!=s){
                    count++;
                    s+=s1;
                }
            }
            cout<<count<<endl;
        }
        /*if(s==s1 || n==1 || k==0)
        {
            cout<<"1"<<endl;
        }
        else cout<<"2"<<endl; */
    }
}
