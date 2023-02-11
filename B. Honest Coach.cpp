#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int min=1000;
        for(int i=0; i<n-1; i++)
        {
            if(arr[i+1]-arr[i]<min)
            {
                min=abs(arr[i+1]-arr[i]);
            }
        }
        cout<<min<<endl;
    }
}
