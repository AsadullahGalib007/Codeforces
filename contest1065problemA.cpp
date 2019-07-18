///From dust I came and to dust I shall return
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, t;
    cin>>t;
    for(i=0; i<t; i++)
    {
        long long int s,a,b,c,x,y;
        cin>>s>>a>>b>>c;
        x=a*c;
        y=s/x;
        y=y*b +y*a;
        s%=(a*c);
        y+=s/c;
        cout<<y<<endl;
    }
    return 0;
}

