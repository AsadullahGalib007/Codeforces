///Asadullah Bin Rahman, HSTU, CSE-17 batch
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,caseno = 0;
    cin>>t;
    while(t--)
    {
        int countB=0;
        int countDot=0;
        string str;
        cin>>str;
        int l = str.length();
        for(int i=0; i<l; i++)
        {
            if(str[i]=='B')
                countB++;
            else if(str[i]=='.')
                countDot++;
        }

        if(countDot<=countB && countDot>=1)
            cout<<"Case #"<<++caseno<<": Y"<<endl;
        else
            cout<<"Case #"<<++caseno<<": N"<<endl;
    }
    return 0;
}
