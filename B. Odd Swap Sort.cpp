#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        long long int n,count=0;
        cin>>n;
        long long int arr[n];
        long long int narr[n];
        for(long long int i=0; i<n; i++)
        {
            cin>>arr[i];
            narr[i]=arr[i];
        }
        sort(narr, narr+n);
        for(long long int i=0; i<n; i++)
        {
            if(arr[i]>arr[i+1] && (arr[i]+arr[i+1])%2!=0)
            {
                    swap(arr[i],arr[i+1]);
                    break;
            }
        }
       /* for(int i=0; i<n; i++)
        {
            cout<<narr[i]<<" ";
        }
        cout<<endl;
        */
        for(long long int i=0; i<n; i++)
        {
            if(arr[i]!=narr[i])
            {
                count++;
            }
        }
        if(count>0) cout<<"NO"<<endl;
        else if(count==0) cout<<"YES"<<endl;
    }
}
