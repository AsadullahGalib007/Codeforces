#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,p = 0, q = 0;
        cin>>n;
        string str;
        cin>>str;
        for(int i=0; i<n; i++)
        {
            if(str[i] == '1')
            {
                p = i+1;
            }
        }
        reverse(begin(str), end(str));
        for(int i=0; i<n; i++)
        {
            if(str[i] == '1')
            {
                q = i+1;
            }
        }

        int x = 2*p;
        int y = 2*q;

        if(p == 0)
            cout<<n<<endl;
        else
            cout<<max(x,y)<<endl;
    }
    return 0;
}
