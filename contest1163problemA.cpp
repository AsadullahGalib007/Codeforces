#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    if(m==n)
    {
        cout<<0<<endl;
        return 0;
    }

    else if(m==0 || m==1)
    {
        cout<<1<<endl;
        return 0;
    }

    else
    {
        int arr[n];
        for(int i=0; i<n; i++)
        {
            arr[i]=1;
        }

        for(int i=1; i<=n; i+=2)
        {
            arr[i]=0;
        }

        for(int i=0; i<n; i++)
            cout<<arr[i]<<" ";
    }


}
