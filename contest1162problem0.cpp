#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,h,m;
    cin>>n>>h>>m;
    int arr[n+1];
    int t=n+1;
    while(t--)
        arr[t]=h;
    for(int i=0; i<m; i++)
    {
        int l,r,x;
        cin>>l>>r>>x;
        for(int j=l; j<=r; j++)
        {
            if(arr[j]>x)
                arr[j]=x;
        }
    }
    long long sum=0;
    for(int i=1; i<=n; i++)
        sum+=(arr[i]*arr[i]);
    cout<<sum<<endl;
    return 0;
}
