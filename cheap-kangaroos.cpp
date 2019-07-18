#include<iostream>
using namespace std;
long long int cgcd(long long int m,long long int n);
long long int cgcd(long long int m,long long int n){
return n==0?m:cgcd(n,m%n);
}
int main()
{
   long long int t,y;
    int N;
    scanf("%lld",&t);
    while(t--){
        scanf("%d",&N);

     long long int gcd,sum=0;
       scanf("%lld",&gcd);
       sum+=gcd;

        for(int i=1;i<N;i++){
                long long int ara;
            scanf("%lld",&ara);
            gcd=cgcd(gcd,ara);

            sum+=ara;
        }

     //   cout<<y<<endl;
  printf("%lld %lld\n",sum,gcd);



    }
    return 0;
}
