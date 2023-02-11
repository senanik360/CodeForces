#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    int arr[tc];
    float s;
    for(int i=0; i<tc; i++)
    {
        cin>>arr[i];
        s+=arr[i];
    }
    cout<<s/tc<<endl;

}
