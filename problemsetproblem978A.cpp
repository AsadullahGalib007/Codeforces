#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    map<int, int> mp;
    stack<int>s;
    for (int i = n - 1; i >= 0; i--)
        mp[arr[i]]++;

    for (int i = n - 1; i >= 0; i--)
    {
        if (mp[arr[i]] != 0)
        {
            //cout << arr[i] << " ";
            s.push(arr[i]);
            mp[arr[i]] = 0;
        }
    }
    cout<<s.size()<<endl;
    while(!s.empty())
    {
        int x = s.top();
        cout<<x<<" ";
        s.pop();
    }
    cout << endl;
    return 0;
}