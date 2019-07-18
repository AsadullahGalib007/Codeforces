#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>vec;
    int n, x, flag=0;
    cin>>n;

    if(n>=1 && n<=100)
    {
        for(int i=0; i<n; i++)
        {
            cin>>x;
            if(x==1)
            {
                flag=1;
            }
            vec.push_back(x);
        }
        if(flag==1)
            cout<<"HARD"<<endl;
        else
            cout<<"EASY"<<endl;
    }
    return 0;
}
