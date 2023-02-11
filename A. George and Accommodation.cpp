#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, p, l, count=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>p>>l;
        if(l-p>=2)
        {
            count++;
        }
    }
    cout<<count<<endl;
}
