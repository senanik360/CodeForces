#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc[4], count=0;
    for(int i=0; i<4; i++)
    {
        cin>>tc[i];
    }
    sort(tc,tc+4);
    for(int i=0; i<3; i++)
    {
        if(tc[i]==tc[i+1]) count++;
    }
    cout<<count<<endl;
}
