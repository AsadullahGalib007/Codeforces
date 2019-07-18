#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

int main()
{
    long long int m,n,count=0;
    cin>>m>>n;
    if(n>=1)
    {

        list<int>listA;
        for(int i=1; i<=m; i++)
        {
            for(int j=1; j<=n; j++)
            {
                listA.push_back(i+j);
            }
        }
        listA.unique();
        list<int>::iterator itr=listA.begin();
        for(itr; itr!=listA.end(); itr++)
        {
            if(*itr%5==0)
                count++;
        }
        cout<<count<<endl;

    }
    return 0;
}
