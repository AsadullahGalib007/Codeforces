#include<bits/stdc++.h>
using namespace std;



int main()
{
    int l=0, count0=0;
    int n,i=0, j=0;
    vector<int>vec;
    cin>>n;
    int a[n*2];
    for( i; i<n; i++)
        cin>>a[i];

    while(i!=2*n)
    {
        a[i++]= a[j++];
    }


    for(int i=1; i<=2*n; i++)
    {
        //cout<<a[i-1]<<" ";
        if(a[i]+a[i-1]==2)
        {
            l++;
        }

        if(a[i]==0)
        {
            l++;
            vec.push_back(l);
            //cout<<endl<<l<<endl;
            l=0;
        }
    }

    for(int i=0; i<2*n; i++)
        if(a[i]==0)
        count0++;

    if(count0==2*n)
    {
        cout<<0<<endl;
        return 0;
    }
    sort(vec.begin(), vec.end());
    vector<int>:: iterator itr= vec.end()-1;

    cout<<*itr<<endl;
    return 0;
}
