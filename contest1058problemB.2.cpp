///Asadullah Bin Rahman (CSE-HSTU)

#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n,d,m;
    cin>>n>>d>>m;
    if(d>1 && d<n &&n>d && n<=100 && m>=1 && m<=100)
    {
        int a[m], b[m];
        for(int i=0; i<m; i++)
        {
            cin>>a[i]>>b[i];
            if(a[i]>=0 && b[i]<=n)
            {
                float d1= sqrt(((a[i]-d)*(a[i]-d)+b[i*b[i]]));
                float d2= sqrt(2)*d;
                float d3= sqrt(2)*(d-n);
                if(d1*d2>0 && d2*d2>d1*d2 && d1*d3>0 && d1*d3<d3*d3)
                {
                  cout<<"YES"<<endl;
                }

                else
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
