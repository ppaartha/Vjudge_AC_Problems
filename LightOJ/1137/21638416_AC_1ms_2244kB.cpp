#include <bits/stdc++.h>
using namespace std;

double W,n,C,L,S;

double func(double H)
{
    double r,t;
    double b=H;
    double c=L/2.0;

    r = b/2 + (c*c/(2*b));
    t = 2*asin(c/r);
    return r*t;
}

int main()

{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cin>>L>>n>>C;

        S=(1.0+(n*C))*L;

        double st=0.0,e=L,mid;

        for(int j=0; j<60; j++)
        {
            mid=(st+e)/2;
            if(func(mid)>S)
            {
                e=mid;
            }
            else
            {
                st=mid;
            }
        }
        printf("Case %d: %lf\n",i,mid);
    }

    return 0;
}

