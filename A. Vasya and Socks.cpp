#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,d;
    cin>>s>>d;
    for(int i=1; d*i<=s; i++){
        s++;
    }
    cout<<s<<endl;
}
