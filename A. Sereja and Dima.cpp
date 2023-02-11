#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    int arr[tc];
    for(int i=0; i<tc; i++)
    {
        cin>>arr[i];
    }
    int l=0, r=tc-1;
    int dm=0,sr=0,count=1;
    for(int i=0; i<tc; i++)
    {
        if(i%2==0)
        {
            if(arr[l]>arr[r])
            {
                sr+=arr[l];
                l++;
            }
            else
            {
                sr+=arr[r];
                r--;
            }
        }
        else
        {
            if(arr[l]>arr[r])
            {
                dm+=arr[l];
                l++;
            }
            else
            {
                dm+=arr[r];
                r--;
            }
        }
    }
    cout<<sr<<" "<<dm<<endl;
}
