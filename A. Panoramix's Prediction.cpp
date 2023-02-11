#include<bits/stdc++.h>
using namespace std;
bool isPrime(int x)
{
    bool prime = true;
    for(int i=2; i<=x/2; i++)
    {
        if(x%i==0)
        {
            prime = false;
            break;
        }
    }
    return prime;
}
int main()
{
    int n,m;
    cin>>n>>m;
    n++;
    while(!isPrime(n))
    {
        n++;
    }
    if(n==m) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}



