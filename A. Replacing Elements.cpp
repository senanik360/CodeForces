#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n,d;
    cin>>tc;
    while(tc--)
    {
        cin>>n>>d;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];

        }
        sort(arr,arr+n);
        if(arr[n-1]<=d)
            cout<<"YES"<<endl;
        else if(arr[0]+arr[1]<=d)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }

}


