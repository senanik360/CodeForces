#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,count=0;
    cin>>tc;
    int arr1[tc], arr2[tc];
    for(int i=0; i<tc; i++)
    {
        cin>>arr1[i];
        cin>>arr2[i];
    }
    for(int i=0; i<tc; i++)
    {
        for(int j=0; j<tc; j++)
        {
            if(arr1[i]==arr2[j])
                count++;
        }
    }
    cout<<count<<endl;
}
