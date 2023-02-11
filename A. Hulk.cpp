#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i=1; i<a; i++)
    {
        if(i%2==0)
        {
            cout<<"I love that ";
        }
        else
        {
            cout<<"I hate that ";
        }
    }
    if(a%2==0)
    {
        cout<<"I love it";
    }
    else
    {
        cout<<"I hate it";
    }


}
