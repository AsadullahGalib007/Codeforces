///From dust I came and to dust I shall return
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, m;
    cin>>n>>m;
    int pos=1,now;
    long long int count=0;

    for(i=1; i<=m; i++)
    {
        cin>>now;

        if(now>=pos)
            count+=(now-pos);

        else
            count+=(n-(pos-now));

        pos=now;
    }

    cout<<count<<endl;
    return 0;
}
