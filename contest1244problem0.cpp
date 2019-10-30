#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    double a,b,c,d,k;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d>>k;
        double m = ceil(a/c);
        double n = ceil(b/d);

        //cout<<a/c<<" "<<b/d<<endl;
        if((ll(m) + ll(n)) > k)
            cout<<-1<<endl;
        else
            cout<<ll(m)<<" "<<ll(n)<<endl;
    }
    return 0;
}
