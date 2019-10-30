#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        map<int, int>m;
        int n;
        cin>>n;
        for(int i=1; i<=n; i++)
        {
            int x; cin>>x;
            m[i] = x;
        }

        for(int i=1; i<=n; i++)
        {
            int y = m[i];
            int count = 1;
            while( y != i)
            {
                ++count;
                y = m[y];
            }
            cout<<count<<" ";
        }
        cout<<endl;
    }
    return 0;
}