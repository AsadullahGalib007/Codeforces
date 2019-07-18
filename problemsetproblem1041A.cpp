///From dust I came and to dust I shall return
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, count=0;
    cin>>n;
    long long int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int min=a[0], max=a[n-1];

    for(i=0; i<n; i++)
    {
        if(a[i]<min)
          min=a[i];


        if(a[i]>max)
          max=a[i];
    }
    for(i=min; i<=max; i++)
    {
        count++;
    }
    cout<<(count-n)<<endl;
    return 0;
}
