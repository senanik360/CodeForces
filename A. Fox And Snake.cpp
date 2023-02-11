#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    for(int i=1; i<=r; i++)
    {
        for(int j=0; j<c; j++)
        {

            if(i%2!=0)
            {
                cout<<"#";
            }
            if(i%4==0)
            {
                if(j==0) cout<<"#";
                else cout<<".";
            }
            if(i%4==2)
            {
                if(j==c-1) cout<<"#";
                else cout<<".";
            }
        }
        cout<<endl;
    }
}
