#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,count=0;
    cin>>tc;
    int arr[tc];
    for(int i=0; i<tc; i++)
    {
        cin>>arr[i];
    }
    int max=arr[0];
    int min=arr[0];
    for(int i=0; i<tc; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            count++;
        }
        if(arr[i]<min)
        {
            min=arr[i];
            count++;
        }
    }
    cout<<count<<endl;
}
