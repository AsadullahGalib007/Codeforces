#include<iostream>
#include<bits/stdc++.h>
bool pal(int [],int);

using namespace std;
int main()
{
    int a[1000];
    int sizes,white,black;
    cin>>sizes>>white>>black;
    for(int i=0;i<sizes;i++)
    {
        cin>>a[i];
    }


          if(pal(a,sizes)==true)
    {
        cout<<"0"<<endl;
    }
    else
    {
        cout<<"-1"<<endl;
    }




    return 0;
}
bool pal(int a[],int sizes)
{
    for(int j=0;j<(sizes/2);j++)
        if(a[j]==a[sizes-j-1])
            return true;
    else
        return false;
}

