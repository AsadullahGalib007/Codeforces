///From dust I came and to dust I shall return
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,t,i,j,count=0;
    cin>>t;
    for(i=0;i<t;i++)
    {
        long long int L, v, l, r;
        cin>>L>>v>>l>>r;
        count=(L-r+l-1)/v;
        cout<<count<<endl;

    }
    return 0;
}
