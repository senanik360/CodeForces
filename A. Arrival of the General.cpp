#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc, mx=0, mn=100, mxi, mni;
    cin>>tc;
    int arr[tc];
    for(int i=0; i<tc; i++)
    {
        cin>>arr[i];
        if(arr[i]>mx)
        {
            mx=arr[i];
            mxi=i;
        }
        if(arr[i]<=mn)
        {
            mn=arr[i];
            mni=i;
        }
    }
    if(mxi>mni) mni++;
    cout<<mxi+(tc-1)-mni<<endl;
}
