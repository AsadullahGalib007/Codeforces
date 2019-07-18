#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int c=0;
        char s[100];
        cin>>s;
        int n = strlen(s);
        sort(s,s+n);
        if(n==1)
            cout<<"Yes"<<endl;

        else
        {
            for(int i=1; i<=n; i++)
            {
                if(s[i]==s[i-1]+1)
                    c++;
            }
            c++;
            if(c==n)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }
    return 0;
}
