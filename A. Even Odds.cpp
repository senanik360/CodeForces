#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int tc, pos;
    cin>>tc>>pos;
    long long int arr[tc];
    long long int j=0;
    for(long long int i=1; i<=tc; i++)
    {
        if(i%2!=0)
        {
            arr[j]=i;
            j++;
        }
    }
    for(int i=1; i<=tc; i++)
    {
        if(i%2==0)
        {
            arr[j]=i;
            j++;
        }
    }
    cout<<arr[pos-1];
}
