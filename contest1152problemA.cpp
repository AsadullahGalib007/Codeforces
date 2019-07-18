#include<bits/stdc++.h>
using namespace std;

int te, to, ke, ko;
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        if(x%2==0)
            te++;

        else
            to++;
    }

    for(int i=0; i<m; i++)
    {
        int x;
        cin>>x;
        if(x%2==0)
            ke++;

        else
            ko++;
    }

    int x = te-ko;
    if(x<0)
        x = 0;

    int y = to-ke;
    if(y<0)
        y = 0;

    cout<<n-x-y<<endl;
    return 0;
}
