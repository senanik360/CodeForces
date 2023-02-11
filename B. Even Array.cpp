#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n,odd,even,good;
    cin>>tc;
    while(tc--)
    {
        odd=0;
        even=0;
        good=0;
        cin>>n;
        int arr[n];

        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            if(i%2==1 && arr[i]%2==0)
            {
                even++;
            }
            if(i%2==0 && arr[i]%2==1)
            {
                odd++;
            }

        }
        if(odd=even)
        {
            cout<<odd<<endl<<endl;
        }
        else
        {
            cout<<"-1"<<endl<<endl;
        }

    }

}



