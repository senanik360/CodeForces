#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc, count=1;
    cin>>tc;
    int arr[tc];
    for(int i=0; i<tc; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<tc-1; i++)
    {
        if(arr[i]!=arr[i+1])
        {
            count++;
        }
    }
    cout<<count<<endl;
}
