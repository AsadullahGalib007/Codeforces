#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];

        for(int i = 1; i<=n; i++)
            cin>>arr[i];

        for(int i = 1; i<=n; i++)
        {
            int x = arr[i];
            int count = 1;
            while(x != i)
            {
                ++count;
                x = arr[x];
            }
            cout<<count<<" ";
        }
        cout<<endl;
    }
    return 0;
}