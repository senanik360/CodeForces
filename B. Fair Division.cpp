#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        int candy[n],count1=0,count2=0;
        for(int i=0; i<n; i++)
        {
            cin>>candy[i];
            if(candy[i]==1)
            {
                count1++;
            }
            else
            {
                count2++;
            }
        }
        if((count2>=0 && count1%2!=0) || (count2%2!=0 && count1==0))
        {
            cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;

        /*if(count1>0 && count2>0)
        {
            if(count1%2==0 && count2%2==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else if(count1>0 && count2==0)
        {
            if(count1%2==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        if(count1==0 && count2>0)
        {
            if(count2%2==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }*/
    }
}


