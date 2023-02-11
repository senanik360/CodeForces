#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, h, count=0;
    cin>>t>>h;
    int arr[t];
    for(int i=0; i<t; i++)
    {
        cin>>arr[i];

        if(arr[i]<=h)
        {
            count++;
        }
        else
        {
            count+=2;
        }
    }
    cout<<count<<endl;
}
