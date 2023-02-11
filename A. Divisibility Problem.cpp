#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    long long int x,y;
    for(int i=0; i<tc; i++)
    {
        cin>>x>>y;
        if(x%y==0)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<y-(x%y)<<endl;
        }
    }

}
