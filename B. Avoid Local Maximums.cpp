#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        int arr[n],maxi=0,count=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        for(int i=2; i<n; i++)
        {
            if(arr[i]<arr[i-1] && arr[i-1]>arr[i-2])
            {
                count++;
                if(i!=n-1 && arr[i-1]<arr[i+1]) arr[i]=arr[i+1];
                else arr[i]=arr[i-1];
            }
            /* if(arr[i]<arr[i-1] && arr[i]<arr[i+1])
             {
                 maxi=max(arr[i-1],arr[i+1]);
                 arr[i+1]=arr[i];
                // cout<<arr[i]<<endl;
                 count++;
             }*/
        }
        cout<<count<<endl;
        for(int i=0; i<n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}
