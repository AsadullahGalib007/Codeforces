#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long m,n;
        cin>>m;
        int c=0,chk=0;
        n=m;
        while(n!=1)
        {
            if(n%2!=0 && n%3!=0 && n%5!=0)
            {
                cout<<-1<<endl;
                chk=1;
                break;
            }

            else if(n%2==0)
            {
                n=n/2;
                c++;
            }

            else if(n%3==0)
            {
                n=(2*n)/3;
                c++;
            }

            else if(n%5==0)
            {
                n=(4*n)/5;
                c++;
            }

        }

        if(chk==0)
            cout<<c<<endl;
    }
    return 0;
}
