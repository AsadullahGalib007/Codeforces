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
        string s;
        cin>>s;
        if(n<11)
        {
            cout<<"NO"<<endl;
        }

        else
        {
            if(n==11)
            {
                if(s[0]=='8')
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }

            else
            {
                int chk=0;
                int m=n-11;
                for(int i=0; i<m; i++)
                {
                    if(s[i]=='8')
                        chk=1;
                }
                if(chk==1)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;

            }
        }
    }

    return 0;
}
