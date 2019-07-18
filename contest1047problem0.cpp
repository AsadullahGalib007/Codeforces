#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int m;
    cin>>m;
    if(m>=3)
    {
        int x=1;
        int o=m-2;
        if(o%3==0)
        {
            x=x+1;
            o=o-1;
            cout<<1<<" "<<x<<" "<<o<<endl;
        }
        else
        {
            cout<<1<<" "<<x<<" "<<o<<endl;
        }
    }
    return 0;
}
