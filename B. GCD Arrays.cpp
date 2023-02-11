#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,k,l,r;
    cin>>tc;
    while(tc--)
    {
        cin>>l>>r>>k;
        int d = (r-l)+1;
        int op=d/2;
        if(r==l)
        {
            if(l==1)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
        }
        else
        {
            if(l%2==1 && r%2==1)//|| (k%2==0 && l%2==0))
            {
                op++;
            }
            if(op<=k)
            {
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }

    }
}

