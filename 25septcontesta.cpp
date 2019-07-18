#include<stdio.h>
int f1();

int main()
{
    int n, y, z, c, d=0, t;
    scanf("%d", &t);
    while(d<t)
    {
        z=0;
        scanf("%d", &n);

        y=n/2;
        for(c=2; c<y; c++)
        {
            if(n%c==0) {z=c; break;}
        }
        printf("%d\n", f1(z));
        d++;
    }
    return 0;
}

int f1(int x)
{
    int y, c, l=0;
c=0;
    y=x;

    while(x>0)
    {
        x=x/2;
        c++;
    }

    int t=c;

    if(t==0) t++;
    return t;
}
