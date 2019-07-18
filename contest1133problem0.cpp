#include<bits/stdc++.h>
using namespace std;

int main()
{
    int h1,h2,h3,m1,m2,m3;
    char ch;
    cin>>h1>>ch>>m1;
    cin>>h2>>ch>>m2;

    h3=(h1*60+m1+h2*60+m2)/2;
    int hour=h3/60;
    int minute=h3%60;

    if(hour<10)
        cout<<"0"<<hour<<ch;
    else
        cout<<hour<<ch;

    if(minute<10)
        cout<<"0"<<minute<<endl;
    else
        cout<<minute<<endl;

    return 0;
}
