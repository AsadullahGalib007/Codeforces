///       From dust I came and to dust I shall return
/**
                    Asadullah Bin Rahman
                          CSE-17
    HAJEE MOHAMMAD DANESH SCIENCE AND TECHNOLOGY UNIVERSITY
*/
#include<bits/stdc++.h>
#define sf(f)                            scanf("%f",&f)
#define pf(f)                            printf("%lld\n",f)
#define PI                               3.1415926535897932385
#define size                             3000000
#define mp                               make_pair
#define pb                               push_back
#define one(x)                           __builtin_popcount(x)              ///int
#define onel(x)                          __builtin_popcountl(x)             ///long int
#define onell(x)                         __builtin_popcountll(x)            ///long long
using namespace std;
typedef long long ll;

///int dx[]= {-1,-1,0,0,1,1};
///int dy[]= {-1,0,-1,1,0,1};
///int dx[]= {0,0,1,-1};                 /*4 side move*/
///int dy[]= {-1,1,0,0};                 /*4 side move*/
///int dx[]= {1,1,0,-1,-1,-1,0,1};       /*8 side move*/
///int dy[]= {0,1,1,1,0,-1,-1,-1};       /*8 side move*/
///int dx[]={1,1,2,2,-1,-1,-2,-2};       /*knight move*/
///int dy[]={2,-2,1,-1,2,-2,1,-1};       /*knight move*/
///Always Remember   'A'=65,'Z'=90 'a'=97 'z'=122 '0'=48

int main()
{
   double n,k,r,g,b,x,y,z;
   ll sum;
   cin>>n>>k;
   sum= ceil((2*n)/k) + ceil((5*n)/k) + ceil((8*n)/k);
   /*r= 2*n;
   g= 5*n;
   b= 8*n;

   x= ceil(r/k);
   y= ceil(g/k);
   z= ceil(b/k);

   sum= x+y+z;
   */
   pf(sum);
   return 0;
}

