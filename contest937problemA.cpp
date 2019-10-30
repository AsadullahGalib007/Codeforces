#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int>m;
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        if(x != 0)
            ++m[x];
    }
    cout<<m.size()<<endl;
    m.clear();
    return 0;
}