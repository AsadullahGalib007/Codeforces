#include<bits/stdc++.h>
using namespace std;

int main()
{
    int c=0, t, id = INT_MIN;
    cin>>t;
    vector<int>v;

    for(int i=0; i<t; i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }

    sort(v.begin(),v.end());

    if(t==2)
    {
        cout<<v[1]-v[0]<<endl;
        return 0;
    }

    vector<int>::iterator ip;
    ip = std::unique(v.begin(), v.begin() + t);
    v.resize(std::distance(v.begin(), ip));
/*
    for (ip = v.begin(); ip != v.end(); ++ip)
        {
        cout << *ip << " ";
        }
*/
 t = v.size();
 //cout<<t<<endl;

    for(int i=1, j=t-1; i<t, j>=0 ; i++, j--)
    {
        int x = abs(v[i]-v[i-1]);
        int y = abs(v[j]-v[j+1]);
        //cout<<x<<" "<<y<<" ";
        if(x!=y)
            c++;

        id=x;
    }
    //cout<<id<<endl;

    if(c!=0)
        cout<<-1<<endl;

    else
        cout<<id<<endl;
    return 0;
}
