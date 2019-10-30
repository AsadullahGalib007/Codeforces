#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[n];
        sort(arr, arr+n);
        for(int i=1; i<n; i++)
        {
            if(arr[i] - arr[i-1] > 1)
            {
                count++;
                i += 3;
            }
        }
        cout<<count<<endl;

    }
    return 0;
}