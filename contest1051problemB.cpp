#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int p,q,k=1,h;
    long long int d;
    cin>>p>>q;
    d=q-p;
    if(d%2!=0)
    {
        cout<<"YES"<<endl;
        long long int pairs=((q-p+1)/2);
        for(k=1,h=p; k<=pairs; h+=2,k++)
            cout<<h<<" "<<h+1<<endl;
        return 0;
    }
}
