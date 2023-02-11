#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n,count;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        int arr[n];
        count=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        sort(arr, arr+n);
        for(int i=1; i<n; i++)
        {
            if(arr[i]-arr[i-1]>1)
            {
                cout<<"NO"<<endl;
                count++;
                break;
            }
        }
        if(count==0) cout<<"YES"<<endl;
    }
}

