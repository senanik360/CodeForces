#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, s1=0, s2=0,count=0;
    cin>>n;
    int nc[n];
    for(int i=0; i<n; i++)
    {
        cin>>nc[i];
        s1+=nc[i];
    }
    sort(nc, nc+n);
    s1=s1/2;
    for(int i=n-1; i>=0; i--)
    {
        s2+=nc[i];
        count++;
        if(s1<s2)
        {
            break;
        }
    }
    cout<<count<<endl;
}
