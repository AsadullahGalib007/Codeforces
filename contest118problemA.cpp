#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100];
    gets(s);
    int n;
    n = strlen(s);

    for(int i=0; i<n; i++)
    {
        s[i]=tolower(s[i]);

        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!='y')
            cout<<"."<<s[i];
    }

    return 0;
}
