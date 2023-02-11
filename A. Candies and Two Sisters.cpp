#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    long long int arr[tc];
    for(int i=0; i<tc; i++)
    {
        cin>>arr[i];
        if(arr[i]==1||arr[i]==2)
        {
            //cout<<"0"<<endl;
            arr[i]=0;
        }
        else
        {
            // cout<<(arr[i]-1)/2<<endl;
            arr[i] = (arr[i]-1)/2;
        }
    }
    for(int i=0; i<tc; i++)
    {
        cout<<arr[i]<<endl;;
    }
}
