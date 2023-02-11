#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,counta=0,countb=0;
    cin>>tc;
    int x[tc];
    for(int i=0; i<tc; i++)
    {
        cin>>x[i];
        if(x[i]%2==0) counta++;
        else countb++;
    }
    if(counta>countb)
    {
        for(int i=0; i<tc; i++)
        {
            if(x[i]%2!=0){
                cout<<i+1<<endl;
            break;
            }
        }
    }
    else{
         for(int i=0; i<tc; i++)
        {
            if(x[i]%2==0)
            {
                cout<<i+1<<endl;
            break;
            }
        }
    }
}
