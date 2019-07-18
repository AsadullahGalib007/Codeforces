#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int m;
    cin>>m;
    if(m!=0)
    {
        int v[]= {1,2,3,4,5};
        vector<int>vec;
        for(int i=0; i<5; i++)
        {
            if(m%v[i]==0)
                vec.push_back(m/v[i]);
        }
        sort(vec.begin(),vec.end());
        vector<int>::iterator itr=vec.begin();
        cout<<*itr<<endl;
    }
    return 0;
}
