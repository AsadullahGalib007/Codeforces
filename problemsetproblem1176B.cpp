#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int count[3] = {0};
        int n;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            ll k;
            cin>>k;
            ++count[k % 3];
        }
        int ans = count[0];
        int _min = min(count[1], count[2]);
        ans += _min;
        count[1] -= _min;
        count[2] -= _min;
        int _max = max(count[1], count[2]);
        _max /= 3;
        ans += _max;
        cout<<ans<<endl;
    }
    return 0;
}