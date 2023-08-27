#include<bits/stdc++.h>
#define pi 3.1415926535897932384626433832795028841
using namespace std;

int main()
{
    int i,t;
    cin>>t;
   for(i=1;i<=t;i++)
    {
        double r1,r2,h,v,r3,p;
        scanf("%lf%lf%lf%lf",&r1,&r2,&h,&p);
        r3=r2+((r1-r2)*p)/h;
        v=(1/3.0)*pi*p*(r3*r3+r3*r2+r2*r2);
        printf("Case %d: %0.8lf\n",i,v);
    }
    return 0;
}
