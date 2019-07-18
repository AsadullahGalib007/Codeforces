#include<iostream>
using namespace std;

int main()
{
    int n;
    while(cin>>n && n!=0)
    {
        int j,a[n], b[n], c[n], v[n], greatest=0,maxv=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i]>>b[i]>>c[i];
            v[i]=a[i]*b[i]*c[i];

            if(greatest<c[i])
            {
                greatest= c[i];
            }
            if(v[i]>maxv)
            {
                maxv=v[i];
            }

            if(c[i]==greatest)
    }
    return 0;
}
