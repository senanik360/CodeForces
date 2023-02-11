#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,d=0,k=0;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        sort(arr, arr+n);
        for(int i=0; i<n-1; i++)
        {
            d=arr[i+1]-arr[i];
            k+=d;
        }
        cout<<k<<endl;
    }

}
