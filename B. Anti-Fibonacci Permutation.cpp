#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=1; i<n; i++)
        {
            cout<<i+1<<" ";
            arr[i]=i+1;
        }
        cout<<1<<endl;
        arr[n]=1;
        int k=1, temp;
        for(int m=1; m<n; m++)
        {
            temp=arr[k];
            arr[k]=arr[k+1];
            arr[k+1]=temp;
            k++;
            for(int i=1; i<=n; i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
}
