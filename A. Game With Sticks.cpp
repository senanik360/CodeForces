#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,count=0;
    cin>>m>>n;
    for(int i=1;; i++)
    {
        if(m-i==0) break;
        if(n-i==0) break;
        count++;
    }
    if(count%2==0) cout<<"Akshat"<<endl;
    else cout<<"Malvika"<<endl;
}
