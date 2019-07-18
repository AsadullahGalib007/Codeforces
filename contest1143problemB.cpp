#include<bits/stdc++.h>
using namespace std;
int a[10000];
int main()
{
    int n;
    cin>>n;
    int l=n;

    int i=0, chk=0;
    while(l!=0)
    {
        a[i] = l%10;
        if(a[i]==0) chk=1;
        l=l/10;
        i++;
    }

    if(i==1)
    {
        cout<<n;
        return 0;
    }
    i--;


    if(a[0]==0)
    {
        int m=1;
        n=n-1;
        while(n!=0)
        {
            m=m*(n%10);
            n=n/10;
        }
        cout<<m<<endl;
        return 0;
    }



        int m=1;
        a[i]= a[i]-1;
        for(int j=i-1; j>=0; j--)
            a[j]=9;
        for(int j=0; j<=i; j++)
            m=m*a[j];
        cout<<m<<endl;
        return 0;


}
