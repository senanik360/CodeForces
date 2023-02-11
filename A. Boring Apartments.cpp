#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n,count=0,digit;
    cin>>tc;
    while(tc--)
    {
        count=0;
        cin>>n;
        digit = n%10;
        while(n>0)
        {
            n/=10;
            count++;
        }
        if(count==1)
        {
            cout<<((digit*10)-10)+1<<endl;
        }
        if(count==2)
        {
            cout<<((digit*10)-10)+3<<endl;
        }
        if(count==3)
        {
            cout<<((digit*10)-10)+6<<endl;
        }
        if(count==4)
        {
            cout<<((digit*10)-10)+10<<endl;
        }
    }
}
