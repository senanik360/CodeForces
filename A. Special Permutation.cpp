
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        if(n%2==0)
        {
            for(int i=n; i>0; i--)
            {
                cout<<i<<" ";
            }
        }
        else
        {
            cout<<n<<" ";
            for(int i=1; i<n; i++)
            {
                cout<<i<<" ";
            }
        }
        cout<<endl;

    }

}

