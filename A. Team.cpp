#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,n;
    int count =0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a>>b>>c;
        if(a+b+c>=2)
        {
            count++;
        }
    }
    cout<<count<<endl;
}
