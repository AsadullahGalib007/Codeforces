///Asadullah Bin Rahman (CSE-HSTU)

#include <bits/stdc++.h>
using namespace std;
float area(int ,int ,int ,int ,int ,int);

float area(int x1, int y1, int x2, int y2, int x3, int y3)
{
    return abs((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0);
}


bool test(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, int x, int y)
{
    float A = area(x1, y1, x2, y2, x3, y3) + area(x1, y1, x4, y4, x3, y3);
    float A1 = area(x, y, x1, y1, x2, y2);
    float A2 = area(x, y, x2, y2, x3, y3);
    float A3 = area(x, y, x3, y3, x4, y4);
    float A4 = area(x, y, x1, y1, x4, y4);
    return (A == A1 + A2 + A3 + A4);
}

int main()
{
    int n,d,m;
    cin>>n>>d>>m;
    if(d>=1 && d<n &&n>d && n<=100 && m>=1 && m<=100)
    {
        int a[m], b[m];
        for(int i=0; i<m; i++)
        {
            cin>>a[i]>>b[i];
            if(a[i]>=0 && b[i]<=n)
            {
                if (test(0, d, d, 0, n, n-d, n-d, n, a[i], b[i]))
                    cout << "YES"<<endl;
                else
                    cout << "NO"<<endl;
            }
        }
    }
    return 0;
}
