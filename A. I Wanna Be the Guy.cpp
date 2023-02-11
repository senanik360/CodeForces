#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc, a,b, arr[200];
    cin>>tc;
    cin>>a;
    int count=0;
    for(int i=0; i<a; i++)
    {
        cin>>arr[i];
    }
    cin>>b;
    for(int i=a; i<a+b; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+(a+b));
    for(int i=0; i<a+b; i++)
    {
        if(arr[i]!=arr[i+1])
        {
            count++;
        }
    }

    if(count==tc)
    {
        cout<<"I become the guy."<<endl;
    }
    else
    {
        cout<<"Oh, my keyboard!"<<endl;
    }
}
