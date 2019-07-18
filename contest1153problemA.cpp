#include<bits/stdc++.h>
#define MAX 100001;
using namespace std;


int main()
{
    int n,t;
    cin>>n>>t;
    vector<int>vec[n];

    int i,j,p;


    for(int l=0; l<n; l++)
    {
        cin>>i>>j;
        for(p=i; p<=100001; p+=j)
        {
            vec[l].push_back(p);
        }
    }

    int min = t;
    sort(vec[0].begin(), vec[n-1].end());

    for(int l=0; l<n; l++)
     for(int i=0; i<vec[l].size(); i++)
            cout<<vec[l][i]<<"\t";

}
