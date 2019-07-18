#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int m;
    cin>>m;
    if(m==0)
        cout<<m<<endl;
    else if((m+1)%2==0)
        cout<<(m+1)/2<<endl;
    else
        cout<<m+1<<endl;
    return 0;
}
