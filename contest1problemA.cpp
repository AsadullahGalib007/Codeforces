#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    long long int x,y;
    double n,m,a;
    cin>>n>>m>>a;
    x = ceil(n/a);
    y = ceil(m/a);
    cout<<x*y<<endl;
    return 0;
}
