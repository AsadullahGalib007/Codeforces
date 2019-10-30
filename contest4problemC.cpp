#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int>m;
    map<string, int>:: iterator it;
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(m[s] == 0){
            cout<<"OK"<<endl;
            m[s]++;
        }

        else
        {
            //it = m.begin();10
            cout<<s<<m[s]<<endl;
            m[s]++;
        }
    }
    return 0;
}
