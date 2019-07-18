#include<iostream>
using namespace std;

int main()
{
    long int n;
    int i,x=1;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=1;i<n;i++)
    {
        if(arr[i] != arr[i-1]) x++;
    }
    cout<<x<<endl;
    return 0;
}
