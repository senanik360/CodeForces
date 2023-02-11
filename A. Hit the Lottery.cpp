#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,done=0, left=0;
    cin>>t;

    done+=t/100;
    left=t%100;

    done+=left/20;
    left=left%20;

    done+=left/10;
    left=left%10;

    done+=left/5;
    left=left%5;

    done+=left/1;

    cout<<done<<endl;
}
