#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x=0,m,n;
    cin>>n>>m;
    if(m>n)
        cout<<-1<<endl;
    else
    {
        if(n%2==0)
            x=n/2;
        else
            x=int(n/2.0)+1;
              while(x%m!=0)
            {
                x++;
            }
        cout<<x<<endl;
        return 0;
    }
}
