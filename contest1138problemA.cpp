#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        list<int>lst;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            lst.push_back(x);
        }

        lst.unique();
        int m =  lst.size();
        if(m==n)
            cout<<"2"<<endl;
        else
            cout<<n-m<<endl;
    }
    return 0;
}
