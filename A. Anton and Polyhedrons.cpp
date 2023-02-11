#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc, i=0,count=0;
    cin>>tc;
    string s[tc];
    while(tc--)
    {
        cin>>s[i];
        if(s[i]=="Tetrahedron")
        {
            count+=4;
        }
        else if(s[i]=="Cube")
        {
            count+=6;
        }
        else if(s[i]=="Octahedron")
        {
            count+=8;
        }
        else if(s[i]=="Dodecahedron")
        {
            count+=12;
        }
        else if(s[i]=="Icosahedron")
        {
            count+=20;
        }
        i++;
    }
    cout<<count<<endl;
}
