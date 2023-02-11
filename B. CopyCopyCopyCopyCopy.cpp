
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,count,n;
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
        sort(arr,arr+n);
        for(int i=0; i<n-1; i++)
        {
            if(arr[i]!=arr[i+1])
            {
                count++;
            }
        }
        cout<<count+1<<endl;
    }
}
