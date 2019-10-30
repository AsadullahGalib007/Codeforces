#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, sum = 0, sum2 = 0, count = 0;
    cin>>t;
    int arr[t];

    for(int i=0; i<t; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }

    sum/=2;
    sort(arr,arr+t);

    for(int i=t-1; i>=0; i--)
    {
        sum2+=arr[i];
        ++count;
        if(sum2>sum)
            break;
    }
    cout<<count<<endl;
    return 0;

}
