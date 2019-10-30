#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef map<int, int> mii;

ll _sieve_size;
bitset<200000100> bs;
vi primes;

void sieve(ll upperbound)
{
    _sieve_size = upperbound + 1;
    bs.set();
    bs[0] = bs[1] = 0;
    for (ll i = 2; i <= _sieve_size; i++)
        if (bs[i])
        {
            for (ll j = i * i; j <= _sieve_size; j += i)
                bs[j] = 0;
            primes.push_back((int)i);
        }
}



int main()
{
    sieve(100000000);
    int t;
    cin>>t;
    while(t--)
    {
        int flag = 0;
        ll x, y;
        cin>>x>>y;
        ll diff = x - y;
        for(int i=0; i<primes.size(), primes[i]<=diff; i++)
        {
            if(diff % primes[i] == 0)
            {
                cout<<"YES"<<endl;
                flag =1;
                break;
            }
        }
        if(flag == 0)
            cout<<"NO"<<endl;
    }

    return 0;
}
