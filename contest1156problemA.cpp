#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum = 0;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++)
        cin>>arr[i];

    for(int i=1; i<=n; i++)
    {
        if((arr[i]==2 && arr[i-1]==3) || (arr[i]==3 && arr[i-1]==2))
        {
            cout<<"Infinite"<<endl;
            return 0;
        }

        if((arr[i]==1 && arr[i-1]==2) || (arr[i]==2 && arr[i-1]==1)) sum+=3;
        else if((arr[i]==1 && arr[i-1]==3) || (arr[i]==3 && arr[i-1]==1)) sum+=4;
        if((i<=n && arr[i-1]==3 && arr[i]==1 && arr[i+1]==2)) sum--;
    }

    cout<<"Finite"<<endl<<sum<<endl;
    return 0;
}
