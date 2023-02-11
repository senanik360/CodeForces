#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,m=1,x,y,z;
    cin>>tc;
    int arr[tc];
    for(int i=0; i<tc; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<tc; i++)
    {

        if(arr[i]%7==0)
        {
            cout<<arr[i]<<endl;
        }
        else
        {
             x=arr[i]%7;
            y=7-x;
            z=arr[i]%10;
            if((y+z)<10) cout<<arr[i]+y<<endl;
            else cout<<arr[i]-x;
           /* int x = arr[i]%7;
             int y = arr[i]-x;
             int z = 7-x;
             int p =arr[i]+z;
             if(x>z) cout<<p<<endl;
             else cout<<y<<endl;*/
        }
    }
    /* for(int i=0; i<tc; i++)
     {
         m=1;
         if(arr[i]%7==0)
         {
             cout<<arr[i]<<endl;
         }
         else
         {
             while(m--)
             {
                 if(arr[i]%7!=0)
                 {
                     arr[i]=arr[i]+1;
                     m++;
                 }
             }
             cout<<arr[i]<<endl;
         }
     }*/
}
