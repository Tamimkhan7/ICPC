#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int c=0,k=0;
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        for(int i=0; i<n; i++)
        {
            if(i==0)
            {
                if(arr[i] < arr[i+1])
                {
                    c++;
                    arr[i] += arr[i+1];
                    k+= arr[i];
                }
            }
            else
            {
                if(k < arr[i+1])
                {
                    c++;
                    arr[i] += arr[i+1];
                    k+= arr[i];
                }
            }
        }
        cout<<c<<endl;
    }
    int q,x,y,z,w;
    cin>>q;
    int b=0;
    for(int i=1; i<=q; i++)
    {
        if(i==1)
        {
            cin>>x>>y>>z;
            continue;
        }
        else
        {
            cin>>x>>y;
            if(x>=y)
            {
                b++;
            }
        }
    }
    cout<<b<<endl;

}
