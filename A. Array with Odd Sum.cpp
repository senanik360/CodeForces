#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n,even,odd,sum=0;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        int arr[n];
        even=0;
        odd=0;
        sum=0;

        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            sum+=arr[i];
            (arr[i]%2==0)? even++ : odd++;
        }
        if(sum%2!=0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            if(odd!=0 && even!=0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }

}

