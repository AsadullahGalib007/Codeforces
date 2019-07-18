#include<bits/stdc++.h>
using namespace std;
#define A 1
#define B 3
#define C 2
#define D 0

int main()
{
    int n,m,x;
    char ch;
    cin>>n;
    x=n%4;
    if(x==D)
    {
        m = 1;
        ch = 'A';
    }

    else if(x==A)
    {
        m = 0;
        ch = 'A';
    }

    else if(x==C)
    {
        m = 1;
        ch = 'B';
    }
    else if(x==B)
    {
        m = 2;
        ch = 'A';
    }

    cout<<m<<" "<<ch<<endl;
    return 0;
}
