#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,r,t;
    cin>>n>>m>>r;
    int ar1[n], ar2[m];
    t=n;
    while(t--)
        cin>>ar1[t];
    t=m;
    while(t--)
        cin>>ar2[t];

    sort(ar1,ar1+n);
    sort(ar2,ar2+m);

    int nshare = r/ar1[0];
    int rest = r%ar1[0];

    int x = nshare*ar2[m-1]+rest;

    if(x>r)
        cout<<x<<endl;
    else
        cout<<r<<endl;

    return 0;
}
