#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n;
    cin>>tc;
    while(tc--)
    {
        int arr[4];
        for(int i=0; i<4; i++)
        {
            cin>>arr[i];
        }
        int m1=max(arr[0],arr[1]);
        int m2=max(arr[2],arr[3]);
        sort(arr,arr+4);
        if((m1==arr[2] || m1==arr[3]) && (m2==arr[2] || m2==arr[3]))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }

}

