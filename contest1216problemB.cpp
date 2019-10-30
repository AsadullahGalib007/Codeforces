#include<bits/stdc++.h>
using namespace std;
#define pb push_back

int main()
{
    
    int n;
    cin>>n;
    vector<pair<int, int>>v;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.pb(make_pair(x,i));
    }

    sort(v.begin(), v.end());

    int ans = 0;

    for(int i=0, j=n-1; i<n, j>=0; i++, j--)
    {
        ans += (i*v[j].first + 1);
    }

    cout<<ans<<endl;
    for(int i=n-1; i>=0; i--)
    {
        cout<<v[i].second+1<<" ";
    }
    cout<<endl;
    return 0;
}

/*
আমাকে সব থেকে বড় থেকে ছোট সর্ট করে নিয়ে ai x X +1 করতে হবে। তাহলে আমি মিনিমামটা পাব।
এখন কথা হলো সর্ট করতে গিয়ে কোনটা কোন সিকুয়েন্সে যে ছিল সেটা যাতে আবার না হারায় যায়।
এজন্য ঐ element এর সাথে তার index টাও store করে নিব। যাতে পরে retrive করতে পারি। 
*/
