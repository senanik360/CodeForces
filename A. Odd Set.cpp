#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,even=0,odd=0;
        cin>>n;
        int arr[n*2];
        for(int i=0; i<n*2; i++)
        {
            cin>>arr[i];
            (arr[i]%2==0)? even++ : odd++;
        }
        (even==odd) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }

}

