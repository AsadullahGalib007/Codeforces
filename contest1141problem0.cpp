#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll countl;
int main()
{
    ll n, m;
    cin>>n>>m;
    if(n==m)
        cout<<0<<endl;

    else
    {
        if(m%n==0)
        {
        while(n!=m)
        {
            n= n*n*n;
            countl++;
        }
        cout<<countl<<endl;
        }

        else
            cout<<-1<<endl;
    }
    return 0;
}
