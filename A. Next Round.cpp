#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a[100], count =0;
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]>0 && a[i]>=a[m-1])
        {
            count++;
        }
    }
    cout<<count<<endl;
}
