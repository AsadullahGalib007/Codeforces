#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,l=0,r=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if (a[i]==0) l++;
        else r++;
    }
    //cout<<"1= "<<r<<"\t0= "<<l<<endl;

    int i=0;
    while(l!=0 && r!=0)
    {
        if(a[i]==0) l--;
        else r--;
        i++;
    }
    cout<<i<<endl;
    return 0;
}
