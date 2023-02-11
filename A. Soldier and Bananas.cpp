#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,w,count=0;
    cin>>k>>n>>w;
    for(int i=1; i<=w; i++)
    {
        count+=i;
    }
    count=(count*k)-n;
    if(count<0) cout<<0<<endl;
    else cout<<count<<endl;

}
