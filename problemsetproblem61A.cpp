#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll x,y;
    cin>>x>>y;
    int ar1[101], ar2[101];
    int i=0;
    while(x!=0)
    {
        ar1[i]=x%10;
        x/=10;
        ar2[i]=y%10;
        y/=10;
    }
    for(int j=0; j<i-1; j++)
    {
        cout<<ar1[j];
    }
    for(int j=0; j<i-1; j++)
    {
        cout<<ar2[j];
    }
    return 0;
}
