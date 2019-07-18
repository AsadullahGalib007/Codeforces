#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int i;
    cin>>i;
    if(i>=1 && i<=100)
    {
        for(int j=0; j<i; j++)
        {
            char s[101];
            cin>>s;
            int n;
            for(int k=0; k!='\0'; k++)
            {
                if(s[k]!='\0') n++;
            }
            if(n<=10)
            {
                cout<<s<<endl;
            }
            else if(n>10 && n<=100)
            {
                cout<<s[0]<<n-2<<s[n]<<endl;
            }
            return 0;

        }
    }
}
