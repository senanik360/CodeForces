#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,a,b,c,count;
    cin>>tc;
    long long int sum=0;
    while(tc--)
    {
        cin>>a>>b>>c;
        count=0;
        while(1)
        {
            if(a>b)
            {
                b+=a;
                count++;
                sum=b;
            }
            else
            {
                a+=b;
                count++;
                sum=a;
            }
           if(sum>c)
            {
                break;
            }
        }
        cout<<count<<endl;
    }
}
